import java.sql.SQLOutput;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        int pin=1234;
        int balance=10000;

        int addamount=0;
        int takeamount=0;

        String name;
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter your pin Number :");// we have to take input frm user
        int password= sc.nextInt();
        //codearrangement shortcut shift+alt+f

        if(password==pin){
            System.out.println("Enter your Name");
            name=sc.next();
            System.out.println("welcome"+ name);
            while(true){
                System.out.println("press 1 to chech your balance");
                System.out.println("press 2 to add amount");
                System.out.println("press 3 to take amount");
                System.out.println("press 4 to tke recipt");
                System.out.println("press 5 to cancel");

                int opt=sc.nextInt();
                switch( opt){
                    case 1 :
                        System.out.println("your current balance is :"+balance);
                        break;
                    case 2 :
                        System.out.println("How much amount did you want to add to you account");
                        addamount=sc.nextInt();
                        System.out.println("succesfullt credited");
                        balance=addamount+balance;//100=500+100==600
                        break;
                    case 3 :
                        System.out.println("how much amount did you want to take amount ");
                        takeamount=sc.nextInt();
                        if(balance<takeamount){
                            System.out.println("insufficient balance");
                            System.out.println("try less than your available balance");
                        }else{
                            System.out.println("transaction succesfull");
                            balance=balance-takeamount;
                        }
                        break;
                    case 4:
                        System.out.println("welcome ");
                        System.out.println("available balance is "+balance);
                        System.out.println("amount deposited"+addamount);
                        System.out.println("amount credited"+takeamount);
                        System.out.println("thanks for coming");
                        break;


                }
             if(opt==5){
                 System.out.println("transaction cancelled");
                 System.out.println("Thank you");
             }

            }
        }else{
            System.out.println("wrong pin number");
        }

    }
}