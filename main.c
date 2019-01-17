#include <stdio.h>
#include <math.h>
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
        if(code == 3){
            printf("suoyoucheliangweizhiruxia: \n");
            for(int i = 0; i < index; i++){
                printf("di%dgecheliangdeweizhiwei(%d,%d)\n",i+1,arr[i].x,arr[i].y);
            }
            printf("\ndianjihuichejixu\n");
            char xx;
            scanf("%c",&xx);
            scanf("%c",&xx);
        }
        if(code == 4){
            printf("qingshurudangqianweizhizuobiao: \n");
            int x;
            int y;
            scanf("%d",&x);
            scanf("%d",&y);
            double min = 100000;
            int carID = 0;
            for(int i=0;i<index;i++){
                int dx = x - arr[i].x;
                int dy = y - arr[i].y;
                double l = sqrt(dx*dx+dy*dy);
                if(min > l){
                    min = l;
                    carID = i;
                }
            }
            printf("yonghudangqianweizhiyudi%dgechedejuliwei%lf,shizuixiaojuli\n",carID+1,min);
            printf("\ndianjihuichejixu\n");
            char xx;
            scanf("%c",&xx);
            scanf("%c",&xx);
        }
        if(code == 5){
            printf("tuichuyingyong\n");
            break;
        }
    }

    return 0;
    
}