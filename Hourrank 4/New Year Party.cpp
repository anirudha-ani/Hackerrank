#include <cstdio>

using namespace std;

int main()
{
    int input_no;

    scanf("%d", &input_no);
    int input ;
    int previous_input ,ans;
    for(int  i = 0 ; i < input_no ; i++)
    {


        scanf("%d", &input);


        if(i == 0)
        {
            previous_input = input;
            ans = input;
            continue;
        }

        if(input<= previous_input)
        {
            ans = previous_input + 1;
            previous_input = ans;
        }
        else
        {
            ans = input;
            previous_input = input;
        }
    }
    printf("%d\n", ans);
    return 0;
}
