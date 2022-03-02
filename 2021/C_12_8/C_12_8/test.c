#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int insertBits(int N, int M, int i, int j)
{
    int a = 1;
    int p = 0;
    for (p = i; p <= j; p++)
    {       
        unsigned int k = ((unsigned)1 << p);
        if ( M == 0 )
        {
            N = N & ~(k);
        }
        if (N & k)
        {
           
        }
        else
        {
           
        }
        M >>= 1;
    }
    return N;
}
int main()
{
    int ret = insertBits(1143207437,
        1017033,
        11,
        31);
    printf("%d ", ret);
    return 0;
}
//int** my_malloc(int r, int c, int* returnSize, int** returncolSize)
//{
//    int** ret = (int**)malloc(sizeof(int*) * r);
//    *returnSize = r;
//    *returncolSize = (int*)malloc(sizeof(int) * r);
//    for (int i = 0; i < r; i++)
//    {
//        (*returncolSize)[i] = c;
//        ret[i] = (int*)malloc(sizeof(int) * c);
//    }
//    return ret;
//}
//int sum(int** mat, int x, int y, int r, int c, int k)
//{
//    int ans = 0;
//    int i = 0;
//    int j = 0;
//    for (i = x - k; i <= x + k; i++)
//    {
//        for (j = y - k; j <= y + k; j++)
//        {
//            if ((i >= 0 && i < r) && (j >= 0 && j < c))
//            {
//                ans += mat[i][j];
//            }
//        }
//    }
//    return ans;
//}
//
//int** matrixBlockSum(int** mat, int matSize, int* matColSize, int k, int* returnSize, int** returnColumnSizes)
//{
//    int x = matSize;
//    int y = matColSize[0];
//
//    int** ret = my_malloc(x, y, returnSize, returnColumnSizes);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < x; i++)
//    {
//        for (j = 0; j < y; j++)
//        {
//            ret[i][j] = sum(mat, i, j, x, y, k);
//        }
//    }
//    return ret;
//}
//int main()
//{
//    int s[] = { 1,2,3 };
//    int s1[] = { 4,5,6 };
//    int s2[] = { 7,8,9 };
//    int* arr[] = { s,s1 ,s2};
//    int col[] = { 3,3,3};
//    int sz = 0;
//    int* retarr = NULL;
//    int** retar = &retarr;
//    int** ret = imageSmoother(arr, 3, col, &sz, retar);
//    for (int i = 0; i < sz; i++)
//    {
//        for (int j = 0; j < retarr[i]; j++)
//        {
//            printf("%d ", ret[i][j]);
//        }
//        printf("\n");
//    }
//	return 0;
//}

//int sum(int** ret, int x, int y, int r, int c)
//{
//    int ans = 0;
//    int cnt = 0;
//    for (int i = x - 1; i <= x + 1; i++)
//    {
//        for (int j = y - 1; j <= y + 1; j++)
//        {
//            if ((i >= 0 && i < r) && (j >= 0 && j < c))
//            {
//                ans += ret[i][j];
//                cnt++;
//            }
//        }
//    }
//    return ans / cnt;
//}
//int** my_malloc(int r, int c, int* returnSize, int** returncolSize)
//{
//    int** ret = (int**)malloc(sizeof(int*) * r);
//    *returnSize = r;
//    *returncolSize = (int*)malloc(sizeof(int) * r);
//    for (int i = 0; i < r; i++)
//    {
//        (*returncolSize)[i] = c;
//        ret[i] = (int*)malloc(sizeof(int) * c);
//    }
//    return ret;
//}
//int** imageSmoother(int** img, int imgSize, int* imgColSize, int* returnSize, int** returnColumnSizes)
//{
//    int r = imgSize;
//    int c = imgColSize[0];
//    int** ret = my_malloc(r, c, returnSize, returnColumnSizes);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < r; i++)
//    {
//        for (j = 0; j < c; j++)
//        {
//            ret[i][j] = sum(img, i, j, r, c);
//        }
//    }
//    return ret;
//}








//void swap(int* a, int* b)
//{
//    int tmp = *a;
//    *a = *b;
//    *b = tmp;
//}
//int** flipAndInvertImage(int** image, int imageSize, int* imageColSize, int* returnSize, int** returnColumnSizes)
//{
//    *returnColumnSizes = (int*)malloc(sizeof(int) * imageSize);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < imageSize; i++)
//    {
//        for (j = 0; j < imageColSize[i] / 2; j++)
//        {
//            swap(&image[i][j], &image[i][imageColSize[i] - 1 - j]);
//        }
//    }
//    for (i = 0; i < imageSize; i++)
//    {
//        for (j = 0; j < imageColSize[i]; j++)
//        {
//            image[i][j] = 1 - image[i][j];
//        }
//    }
//    *returnSize = imageSize;
//    for (i = 0; i < imageSize; i++)
//    {
//        (*returnColumnSizes)[i] = *imageColSize;
//    }
//    return image;
//}
//void swap(int* a, int* b)
//{
//    int tmp = *a;
//    *a = *b;
//    *b = tmp;
//}
//int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < matrixSize; i++)
//    {
//        for (j = 0; j <= i; j++)
//        {
//            swap(&matrix[i][j], &matrix[j][i]);
//        }
//    }
//    *returnSize = matrixSize;
//    *returnColumnSizes = matrixColSize;
//    return matrix;
//}
//int** my_malloc(int r, int c, int* returnSize, int** returncolSize)
//{
//    int** ret = (int**)malloc(sizeof(int*) * r);
//    *returncolSize = (int*)malloc(sizeof(int) * r);
//    *returnSize = r;
//    for (int i = 0; i < r; i++)
//    {
//        (*returncolSize)[i] = c;
//        ret[i] = (int*)malloc(sizeof(int) * c);
//    }
//    return ret;
//}
//int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes)
//{
//    int n = matSize;//行数
//    int m = *matColSize;//列数
//    int i = 0;
//    int j = 0;
//    
//    if (m * n != r * c)
//    {
//        *returnColumnSizes = (int*)malloc(sizeof(int) * n);
//        *returnSize = n;
//        for (i = 0; i < n; i++)
//        {
//            (*returnColumnSizes)[i] = m;
//        }
//        return mat;
//    }
//    int id = 0;
//    int** ret = my_malloc(r, c, returnSize, returnColumnSizes);
//    for (i = 0; i < r; i++)
//    {
//        for (j = 0; j < c; j++)
//        {
//            id = i * c + j;
//            ret[i][j] = mat[id / m][id % m];
//        }
//    }
//    return ret;
//}
//int** shiftGrid(int** grid, int gridSize, int* gridColSize, int k, int* returnSize, int** returnColumnSizes)
//{
//    *returnSize = gridSize;
//    *returnColumnSizes = gridColSize;
//    int c = *gridColSize;
//    int len = gridSize * (c);
//    int* tmp = (int*)malloc(sizeof(int) * len);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < len; i++)
//    {
//        tmp[i] = grid[i / c][i % c];
//    }
//    k %= len;
//    for (i = 0; i < k; i++)
//    {
//        int t = tmp[len - 1];
//        for (j = len - 1; j > 0; j--)
//        {
//            tmp[j] = tmp[j - 1];
//        }
//        tmp[0] = t;
//    }
//    for (i = 0; i < gridSize; i++)
//    {
//        for (j = 0; j < c; j++)
//        {
//            grid[i][j] = tmp[i * c + j];
//        }
//    }
//    return grid;
//}
//
//int main()
//{
//    int s[] = { 1,2,3 };
//    int s1[] = { 4,5,6 };
//    int s2[] = { 7,8,9 };
//    int* arr[] = { s,s1 ,s2};
//    int col[] = { 3,3,3};
//    int sz = 0;
//    int* retarr = NULL;
//    int** retar = &retarr;
//    int** ret = shiftGrid(arr,3,col,1,&sz,retar );
//    for (int i = 0; i < sz; i++)
//    {
//        for (int j = 0; j < retarr[i]; j++)
//        {
//            printf("%d ", ret[i][j]);
//        }
//        printf("\n");
//    }
//	return 0;
//}
//int main()
//{
//    int s1[] = { 1,2 };
//    int s2[] = { 3,4 };
//    int* arr[] = { s1,s2 };
//    int len[] = { 2,2 };
//    int returnSize = 0;
//    int* rey = NULL;
//    int** returnarr = &rey;
//    int**ret = matrixReshape(arr, 2, len, 4, 1, &returnSize, returnarr);
//    for (int i = 0; i < returnSize; i++)
//    {
//        for (int j = 0; j < rey[i]; j++)
//        {
//            printf("%d ", ret[i][j]);
//        }
//    }
//    return 0;
//}