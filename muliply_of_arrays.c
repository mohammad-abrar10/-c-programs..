// #include <stdio.h>
// int main()
// {
//     int a[2][2]={{1,2},{2,4}};
//     int b[2][2]={{5,5},{7,8}};
//     int mul[2][2];
//     int i,j,k;

//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             for(k=0;k<2;k++)
//             {
//             mul[i][j]=a[i][k]*b[k][j];
//             }
//         }
//     }
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             printf("%d \t",mul[i][j]);
//         }
//          printf("\n");
//     }

// }

#include <stdio.h>
int main()
{
    int a[2][2]={{1,2},{3,4}},b[2][2]={{5,6},{7,8}},mul[2][2],x,y,z;

    for (x=0;x<2;x++){
        for(y=0;y<2;y++){
            mul[x][y]=0;
            for(z=0;z<2;z++)
            mul[x][y]+=a[x][z]*b[z][y];
        }
    }
    for (x=0;x<2;x++){
        for(y=0;y<2;y++){
            printf("%d \t",mul[x][y]);
        }
        printf("\n");
    }

}

