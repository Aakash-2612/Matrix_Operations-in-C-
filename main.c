#include <stdio.h>
#include <conio.h>

void display(int arr[3][3]){
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("\t %d",arr[i][j]);
        }
    }
}

void sum_matrix(){
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
    
    display(sum);
}

void mul_matrix(){
    int i, j, mat1[3][3];
    printf("\nEnter the elements of the first 3X3 matrix: ");
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
    printf("\nEnter the elements of the second 3X3 matrix: ");
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

    display(prod);
}

void transpose_matrix(){
    int i, j, mat[3][3];
    int transposed_mat[3][3];
    printf("\nEnter the elements of the matrix: ");
    printf("\n*********************************\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nThe elements of the matrix are: ");
    printf("\n********************************\n");
    for (i=0; i<3; i++)
    {
        printf("\n");
        for (j=0; j<3; j++)
        {
            printf("\t %d", mat[i][j]);
        }
    }
    for (i=0; i<3; i++)
    {
        printf("\n");
        for (j=0; j<3; j++)
        {
            transposed_mat[i][j] = mat[j][i];
        }
    }
    printf("\nThe elements of the transposed matrix are: ");
    printf("\n*******************************************\n");
    for (i=0; i<3; i++)
    {
        printf("\n");
        for (j=0; j<3; j++)
        {
            printf("\t %d",transposed_mat[i][j]);
        }
    }
}

void square_matrix(){
    int i, j, mat1[3][3];
    printf("\nEnter the elements of the matrix: ");
    printf("\n***********************************");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    int A_squ[3][3];
    printf("\nThe square of the matrix is: ");
    printf("\n*****************************");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            A_squ[i][j] = 0;
            for(int k=0;k<3;k++)
            {
                A_squ[i][j] += mat1[i][k]*mat1[k][j];
            }
        }
    }
    display(A_squ);
}

void cube_matrix(){
    int i, j, mat1[3][3];
    printf("\nEnter the elements of the matrix: ");
    printf("\n**********************************");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    int A_squ[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            A_squ[i][j] = 0;
            for(int k=0;k<3;k++)
            {
                A_squ[i][j] += mat1[i][k]*mat1[k][j];
            }
        }
    }
    int A_cub[3][3];
    printf("\nThe cube of the matrix is: ");
    printf("\n***************************");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            A_cub[i][j] = 0;
            for(int k=0;k<3;k++)
            {
                A_cub[i][j] += A_squ[i][k]*mat1[k][j];
            }
        }
    }
    display(A_cub);
}

int main()
{
    int option, row, col;
    int mat1[2][2], mat2[2][2];
    int run = 1;
    while (run == 1)
    {
        printf("\n***********MAIN MENU**********");
        printf("\n 1. Square of a matrix");
        printf("\n 2. Cube of a matrix");
        printf("\n 3. Add the matrices");
        printf("\n 4. Multiply the matrices");
        printf("\n 5. Transpose the matrix");
        printf("\n 6. EXIT");

        printf("\n\n Enter your option: ");
        scanf("%d", &option);
        switch(option)
        {
            case 1:
            square_matrix();
            break;

            case 2:
            cube_matrix();
            break;

            case 3:
            sum_matrix();
            break;

            case 4:
            mul_matrix();
            break;

            case 5:
            transpose_matrix();
            break;

            case 6:
            run = 0;
            printf("Thank you for using this program");
            break;

        }
    }
    return 0;

}
