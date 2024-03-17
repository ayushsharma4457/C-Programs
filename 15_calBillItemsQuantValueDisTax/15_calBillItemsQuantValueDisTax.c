#include <stdio.h>

int main()
{
    float items, value, discount, tax;
    printf("Enter The Items: ");
    scanf("%f", &items);
    printf("Enter The Value: ");
    scanf("%f", &value);
    printf("Enter The Discount: ");
    scanf("%f", &discount);
    printf("Enter The Tax: ");
    scanf("%f", &tax);

    float amount, total_discount, discounted_total, total_tax, total_amount;

    amount = value * items;
    total_discount = (value * items) * discount / 100;
    discounted_total = amount - total_discount;
    total_tax = (discounted_total * tax) / 100;
    total_amount = discounted_total + total_tax;

    printf("*******************BILL*******************");

    printf("\nQuantity Sold:\t\t\t %f", items);
    printf("\nPrice Per Item:\t\t\t %f", value);
    printf("\n\t\t\t\t---------------");
    printf("\nAmount:\t\t\t\t %f", amount);
    printf("\nDiscount:\t\t\t %f", total_discount);
    printf("\nDiscounted Total:\t\t %f", discounted_total);
    printf("\nTax:\t\t\t\t %f", total_tax);
    printf("\n\t\t\t\t---------------");
    printf("\nTotal Amount To Be Paid: %f ", total_amount);

    return 0;
}