#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool arr[n][3];
    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    int res = 0;
    for(int i = 0; i < n; i++){
        int c = 0;
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] == 1)
                c++;
        }
        if(c >= 2)
            res++;
    }

    cout << res << endl;

    return 0;
}