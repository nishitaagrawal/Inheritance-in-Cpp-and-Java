package lab5;
import java.util.Scanner;
class Account {
    String cust_name;
    int acc_number;
    Scanner sc=new Scanner(System.in);
    void getData() {
        System.out.print("Enter customer name : ");
        cust_name=sc.next();
        System.out.print("Enter account number : ");
        acc_number=sc.nextInt();
    }
    void putData(){
        System.out.println("\nCUSTOMER DETAILS\n \nCUSTOMER NAME : "+cust_name+"\nACCOUNT NUMBER : "+acc_number);
    }
}
class savingAcc extends Account {
    int min_bal;
    float sav_bal;
    void getData(){
        super.getData();
        System.out.print("Enter min balance : ");
        min_bal=sc.nextInt();
        System.out.print("Enter savings balance : ");
        sav_bal=sc.nextFloat();
    }
    void putData(){
        super.putData();
        System.out.println("MINIMUM BALANCE : "+min_bal+"\nSAVINGS BALANCE : "+sav_bal);
    }
}
class accdetail extends savingAcc {
    float deposit;
    float withdraw_amt;
    void getData() {
        super.getData();
        System.out.print("Enter the deposits value : ");
        deposit=sc.nextFloat();
        System.out.print("Enter the withdrawal amount : ");
        withdraw_amt=sc.nextFloat();
    }
    void putData() {
        super.putData();
        System.out.println("DEPOSITS : "+deposit+"\nWITHDRAWAL AMOUNT : "+withdraw_amt);
    }
}
class accountInfo {
    public static void main(String[] args) {
        accdetail ac=new accdetail();
        ac.getData();
        ac.putData();
    }
}

