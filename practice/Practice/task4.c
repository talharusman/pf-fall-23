#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[30];
    char product_name[30];
    int unique_id;
    char associated_category[30];
    float price;
} record;

void transfer_data(FILE *categoryfile, FILE *productfile, FILE *finalfile)
{
    record category[200];
    record product[200];
    record final[200];
    int precount = 0, catecount = 0, producount = 0;

    while (fscanf(categoryfile, "%s %d", category[catecount].name, &category[catecount].unique_id) == 2)
    {
        catecount++;
    }

    while (fscanf(productfile, "%s %f %d", product[precount].associated_category, &product[precount].price, &product[precount].unique_id) == 3)
    {
        precount++;
    }

    int k = 0;
    for (int i = 0; i < catecount; i++)
    {
        for (int j = 0; j < precount; j++)
        {
            if (category[i].unique_id == product[j].unique_id)
            {
                strcpy(final[k].associated_category, product[j].associated_category);
                strcpy(final[k].name, category[i].name);
                final[k].price = product[j].price;
                final[k].unique_id = category[i].unique_id;
                k++;
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        fprintf(finalfile, "%-10s %-10s   %10.2f\n", final[i].name,  final[i].associated_category, final[i].price);
    }

    return;
}

int main()
{
    FILE *categoryfile = fopen("categories.txt", "r");
    FILE *productfile = fopen("product.txt", "r");
    FILE *finalfile = fopen("final.txt", "w");

    if (categoryfile == NULL || productfile == NULL || finalfile == NULL)
    {
        printf("problem in file opening");
        return 1;
    }

    transfer_data(categoryfile, productfile, finalfile);
    printf("files combined successfully\n");

    fclose(categoryfile);
    fclose(productfile);
    fclose(finalfile);

    return 0;
}