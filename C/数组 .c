#include <stdio.h>
#include <stdbool.h>
int main()
{
    char Name;
    printf("请输入名字：\n");
    scanf("%s",&Name);
    if (Name == "Anly")
    {
        printf("名字输入正确。");
    }

    return 0;
}
