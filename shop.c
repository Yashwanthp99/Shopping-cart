int shop()
{
    /* Declare variable for the number of products to be selected*/
    int numofProd;
    
    /* Declare the string for name */
    char str[30];
    
    /* Get the name of the user */
    printf("Please enter your name:\n");
    scanf("%s", str);
    printf("Hello %s, Welcome to our online grocery shopping!\n",str);
    
    /* Show the products and their prices */
    printf("Welcome to Online Grocery Shopping. Please select your product from the choices below:\n");
    printf("ID      Item            Price\n");
    printf("1       Milk            30\n");
    printf("2       Eggs(6 eggs)    24\n");
    printf("3       Bread           30\n");
    printf("4       Cereal          70\n");
    printf("5       Butter          40\n");
    printf("6       Icecream        100\n");
    printf("7       Chocolate       40\n");
    printf("8       Biscuits        60\n");
    printf("9       Cake            200\n");
    printf("10      Cheese          40\n");
    printf("11      Mayonnaise      50\n");
    printf("12      Flour           80\n");
    printf("13      Wheat           100\n");
    printf("14      Body Wash       70\n");
    printf("15      Body Soap       60\n");
    printf("16      Brush(2)        50\n");
    printf("17      Loofah          25\n");
    printf("18      Toothpaste      40\n");
    printf("19      Pulses          100\n");
    printf("20      Rice            200\n");
    printf("21      Maida           100\n");
    printf("22      Gram flour      80\n");
    printf("23      Door Mat        150\n");
    printf("24      Disinfectant    150\n");
    printf("25      Paneer          80\n");
    printf("26      Deo             80\n");
    printf("27      Cream           70\n");
    printf("28      Talcum Powder   60\n");
    printf("29      Mop             50\n");
    printf("30      Flask           40\n");
    

    /*Get the number of products from the user*/
    printf("Enter the number of products you would like to buy:");
    scanf("%d", &numofProd);
    
    /* Declare string array for products */
    char productsarr[30][100]={"Milk",
     "Eggs(6 eggs)",
     "Bread",
     "Cereal",
     "Butter",
     "Icecream",
     "Chocolate",
     "Biscuits",
     "Cake",
     "Cheese",
     "Mayonnaise",
     "Flour",
     "Wheat",
     "Body Wash",
     "Body Soap",
     "Brush(2)",
     "Loofah",
    "Toothpaste",
     "Pulses",
     "Rice",
     "Maida",
     "Gram flour",
     "Door Mat",
     "Disinfectant",
     "Deo",
     "Cream",
     "Talcum Powder",
     "Cereal",
     "Mop",
     "Flask",
     };
    
    /* Declare array for collecting the IDs of an array */
    int idofProd[numofProd];
    
    /* Declare array for collecting the count of items for each product */
    int countofProd[numofProd];
    
    /*Declare the price for each product */
    int priceofProd[30] = {30,24,30,70,40,100,40,60,200,40,50,80,100,70,60,50,25,40,100,200,100,80,150,150,80,80,70,60,50,40};
    
    /*Initialise the total amount variable to be 0*/
    int totamt = 0;
    
    /* Get the IDs of the products' to be purchased */
    printf("\nEnter the IDs of the products:\n");
    for(int i = 0; i < numofProd; i++)
        scanf("%d", &idofProd[i]);
        
    /* Print the selected product IDs */
    printf("\nThe selected products' IDs are: \n");
    for(int i = 0; i < numofProd; i++)
        printf("%d\t", idofProd[i]);
        
    /* Get the count of the number of items to be purchased for each product */
    printf("\nEnter the number of items to be purchased for each product:\n");
    for(int i = 0; i < numofProd; i++)
        scanf("%d", &countofProd[i]);
    
    printf("\n --------- Processing amount to be paid:-------------");
    
    /* Calculate the price of each item */
    for(int i = 0; i < numofProd; i++)
    {
        /* Declare a variable for total price of each item */
        int totpriceofoneitem = 0;
        
        /* Get the ID of each product and subtract 1, to match with array index */
        int id = idofProd[i];
        id = id - 1;
        
        /* Calculate total price of each item */
        totpriceofoneitem = priceofProd[id] * countofProd[i];

        /* Print the total of each product  - ID */
        printf("\nTotal of %s:", productsarr[id]);
        
        /* Print the ID amount of product */
        printf("\t %d", totpriceofoneitem);
        
        /* Calculate the total amount */
        totamt = totamt + totpriceofoneitem;
    }
    
    /* Print the total amount to be paid */
    printf("\nTotal amount to be paid is:  %d", totamt);
    
    printf("\nThank you for shopping!");
    return 0;
}
