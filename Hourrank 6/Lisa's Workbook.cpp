#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n , k ,input;
    int problems[105];

    scanf("%d %d", &n , &k);

    for(int i = 1 ; i <= n ; i++)
    {
        scanf("%d", &input);

        problems[i] = input;
    }
    int ans = 0;
    int problem_count = 0;
    int page_count = 1;
    int problem_in_chapter;
    for(int i = 1 ; i <= n ; i++)
    {
        problem_in_chapter = 1;
        for(int j = 1 ; j <= problems[i] ; j++)
        {
            problem_count++;
            problem_in_chapter++;
            if(problem_count == page_count) ans++;

            if(problem_in_chapter%k == 0)
            {
                page_count++;
            }

        }
    }
    printf("%d\n",ans);
    return 0;
}
