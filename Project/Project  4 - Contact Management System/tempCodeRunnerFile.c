    struct Contact_Details   CD,*cd;
    cd=&CD;

        printf("Enter Your Email : ");
    scanf("%s",(*cd).Email);

    printf("Enter Your Name : ");
    scanf("%s",(*cd).Name);

    printf("Enter Your Birthday : ");
    scanf("%s",(*cd).Birthday);



    printf("Enter Your Address : ");
    scanf("%s",(*cd).Address);

    
   
    printf("Enter Your Contact Number : ");
    scanf("%s",(*cd).Contacts);


    printf("YOur Details Are Here : %s %s %s %s %s",
   CD.Email, CD.Name,CD.Birthday,CD.Address,CD.Contacts);