#include<stdio.h>
int main()
{
    int i, j, sum[3][3];
    int mat1[3][3];
    printf("\nEnter the elements of the first matrix: ");
    printf("\n****************************************");
    for (i=0; i<3; i++)
    {
        printf("\n");
        for (j=0; j<3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    int mat2[3][3];
    printf("\nEnter the elements of the second matrix: ");
    printf("\n*****************************************");
    for (i=0; i<3; i++)
    {
        printf("\n");
        for (j=0; j<3; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("\nThe sum of the two matrix is: ");
    printf("\n******************************");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("\t %d",sum[i][j]);
        }
    }
    return 0;
}
