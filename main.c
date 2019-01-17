#include <stdio.h>
struct point{
    int x;
    int y;
};
int main(){
    printf("huanyingjinruzhuanchangweizhiguanlixitong\n");
    while(1){
        int index = 0;
        struct point arr[100];
        printf("1---tianjiacheliangweizhi\n");
        printf("2---shanchucheliangweizhi\n");
        printf("3---xianshiquanbucheliangweizhi\n");
        printf("4---fanhuiliwodeweizhizuijindecheliang\n");
        printf("5---tuichu\n");

        printf("qingxuanzexiangyinggongneng\n");
        int code;
        scanf("%d",&code);
         if(code == 1){
            printf("qingshurucheliangweizhidexzuobiaoheyzuobiao: \n");
            int x;
            int y;
            scanf("%d",&x);
            scanf("%d",&x);
            arr[index].x = x;
            arr[index].y = y;
            index++;
            printf("tianjiawancheng,dianjihuichejixu\n");
            char xx;
            scanf("%c",&xx);
            scanf("%c",&xx);
        }
        if(code == 2){
            if (index > 0)
            {
                index--;
                printf("shanchuwancheng,dianjihuichejixu\n");
                char xx;
                scanf("%c",&xx);
                scanf("%c",&xx);
            }
            else{
                printf("wucheliangweizhixinxi,shanchushibai,dianjihuichejixu\n");
                char xx;
                scanf("%c",&xx);
                scanf("%c",&xx);
            }
        }

    return 0;
    }
}