
    printf("\n otherwise you are gay\n");
    scanf("%d", &num);
    for(int temp=num; temp!=0; temp /=10){
        sum += temp % 10;
    }