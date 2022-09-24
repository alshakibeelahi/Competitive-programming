#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define BOOST                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ll long long int
#define pb push_back
#define mp make_pair
#define yes printf("YES\n")
#define no printf("NO\n")
#define Gcd(a, b) __gcd(a, b)
#define Lcm(a, b) (a * b) / Gcd(a, b)
#define mem(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define uniqueArr(x) x.erase(unique(all(x)), x.end())
#define For(i, j, k) for (int i = j; i < k; i++)
#define Rev(i, k, n) for (int(i) = (k - 1); (i) >= (n); (i)--)
#define takeArr(x, o, n)        \
    for (int i = o; i < n; i++) \
    {                           \
        cin >> x[i];            \
    }
#define printArr(x, o, n)       \
    for (int i = o; i < n; i++) \
    {                           \
        cout << x[i] << " ";    \
    }                           \
    cout << endl;
#define show(...) __f(#__VA_ARGS__, __VA_ARGS__)
#define pvector(a)        \
    for (auto x : a)      \
        cout << x << " "; \
    cout << endl
#define pmap(a)      \
    for (auto x : a) \
    cout << x.first << " " << x.second << endl

template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cout << name << ": " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << ": " << arg1 << " |";
    __f(comma + 1, args...);
}

void printBoard(int n, int board[][8])
{
    For(i, 0, n)
    {
        For(j, 0, n)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool canPlace(int board[][8], int n, int x, int y)
{
    if (board[x][y] == -1)
    {
        return false;
    }
    // column
    For(i, 0, x)
    {
        if (board[i][y] == 1)
        {
            return false;
        }
    }
    // left diagonal
    int i = x;
    int j = y;
    while (i >= 0 and j >= 0)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
        i--;
        j--;
    }
    i = x;
    j = y;
    while (i >= 0 && j < n)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
        i--;
        j++;
    }
    return true;
}

int nQueenWays(int n, int board[][8], int i)
{
    // base case
    if (i == n)
    {
        return 1;
    }

    // recursion case
    // place every queen at every index

    int way = 0;

    For(j, 0, n)
    {
        // is current position is good or bad
        if (canPlace(board, n, i, j))
        {
            board[i][j] = 1;
            way = way + nQueenWays(n, board, i + 1);
            // backtracking jone
            board[i][j] = 0;
        }
    }
    return way;
}

bool nQueen(int n, int board[][8], int i)
{
    // base case
    if (i == n)
    {
        // print the board
        printBoard(n, board);
        return true;
    }

    // recursion case
    // place every queen at every index
    For(j, 0, n)
    {
        // is current position is good or bad
        if (canPlace(board, n, i, j))
        {
            board[i][j] = 1;
            bool success = nQueen(n, board, i + 1);
            if (success)
            {
                return true;
            }
            // backtracking jone
            board[i][j] = 0;
        }
    }
    return false;
}

void solve()
{
    int board[8][8] = {0};
    int n = 8;
    For(i, 0, n)
    {
        For(j, 0, n)
        {
            char x;
            cin >> x;
            if (x == '*')
                board[i][j] = -1;
        }
    }
    cout << nQueenWays(n, board, 0) << endl;
}

int32_t main()
{
    BOOST;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}