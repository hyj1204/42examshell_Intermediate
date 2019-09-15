#include <stdio.h>

/*
1）建立26个字母的数组，所有数字都从0开始
2）遇到字母就在对应的数组位置上+1
3）从str开头开始遇到字母不是0的就显示，显示完之后置零。直到字符串结束。
 */

void count(char *str)
{
    int i;
    int alp_arr[26] = {0};
    int first;

    i = 0;
    first = 1;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            {
                alp_arr[str[i] - 'a'] = alp_arr[str[i] - 'a'] + 1;
            }
        if (str[i] >= 'A' && str[i] <= 'Z')
            {
                alp_arr[str[i] - 'A'] = alp_arr[str[i] - 'A'] + 1;
            }
        i++;
    }
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z' && alp_arr[str[i] - 'a'] != 0)
        {
            if (!first)
                printf(", ");
            printf("%d%c", alp_arr[str[i] - 'a'], str[i]);
            first = 0;
            alp_arr[str[i] - 'a'] = 0;
        }
        if (str[i] >= 'A' && str[i] <= 'Z' && alp_arr[str[i] - 'A'] != 0)
        {
            if (!first)
                printf(", ");
            printf("%d%c", alp_arr[str[i] - 'A'], str[i] - 'A' + 'a');
            first = 0;
            alp_arr[str[i] - 'A'] = 0;
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
        count(av[1]);
    printf("\n");
}