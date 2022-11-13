#include <stdio.h>
int main()
{
    int i, j, mat1[3][3];
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
    int prod[3][3];
    printf("\nThe product of the two matrix are: ");
    printf("\n*********************************\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            prod[i][j] = 0;
            for(int k=0;k<3;k++)
            {
                prod[i][j] += mat1[i][k]*mat2[k][j];
            }
        }
    }
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("\t %d",prod[i][j]);
        }
    }
    return 0;
}
