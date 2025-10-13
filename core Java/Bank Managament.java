// BANK MANAGEMENT PROJECT

abstract class Account
{
    int accountNumber;
    String holderName;
    double balance;

    public Account(int accountNumber, String holderName, double balance)
    {
        this.accountNumber = accountNumber;
        this.holderName = holderName;
        this.balance = balance;
    }

    // Getters and Setters
    public int getAccountNumber()  { 
        return accountNumber;
    }
    public void setAccountNumber(int accountNumber) { 
        this.accountNumber = accountNumber;
    }

    public String getHolderName() { 
        return holderName;
    }
    
    public void setHolderName(String holderName) { 
        this.holderName = holderName; 
    }

    public double getBalance() {
        return balance; 
    }
    
    public void setBalance(double balance) {
        this.balance = balance; 
    }

    
    public void deposit(double amount)
    {
        balance += amount;
        System.out.println(holderName + " deposited " + amount);
    }

    public void withdraw(double amount)
    {
        if(balance >= amount)
        {
            balance -= amount;
            System.out.println(holderName + " withdrew " + amount);
        }
        else
        {
            System.out.println("Insufficient Balance!");
        }
    }

    
    public abstract void calculateInterest();

    // Display 
    public void display()
    {
        System.out.println("Account Number : " + accountNumber);
        System.out.println("Holder Name    : " + holderName);
        System.out.println("Balance        : " + balance);
    }
}


// SavingsAccount Class

class SavingsAccount extends Account
{
    double interestRate;

    public SavingsAccount(int accountNumber, String holderName, double balance, double interestRate)
    {
        super(accountNumber, holderName, balance);
        this.interestRate = interestRate;
    }

    @Override
    public void calculateInterest()
    {
        double interest = balance * interestRate / 100;
        balance += interest;
        System.out.println("Interest of " + interest + " added to Savings Account.");
    }

    @Override
    public void display()
    {
        super.display();
        System.out.println("Interest Rate  : " + interestRate + "%");
        System.out.println();
    }
}


// CurrentAccount Class

class CurrentAccount extends Account
{
    double overdraftLimit;

    public CurrentAccount(int accountNumber, String holderName, double balance, double overdraftLimit)
    {
        super(accountNumber, holderName, balance);
        this.overdraftLimit = overdraftLimit;
    }

    @Override
    public void calculateInterest()
    {
        System.out.println("No interest applicable for Current Account.");
    }

    @Override
    public void withdraw(double amount)
    {
        if(balance + overdraftLimit >= amount)
        {
            balance -= amount;
            System.out.println(holderName + " withdrew " + amount + " (with overdraft).");
        }
        else
        {
            System.out.println("Overdraft limit exceeded!");
        }
    }

    @Override
    public void display()
    {
        super.display();
        System.out.println("Overdraft Limit: " + overdraftLimit);
        System.out.println();
    }
}


// LoanAccount Class

class LoanAccount extends Account
{
    double loanInterestRate;

    public LoanAccount(int accountNumber, String holderName, double loanAmount, double loanInterestRate)
    {
        super(accountNumber, holderName, -loanAmount);
        this.loanInterestRate = loanInterestRate;
    }

    @Override
    public void calculateInterest()
    {
        double interest = Math.abs(balance) * loanInterestRate / 100;
        balance -= interest;
        System.out.println("Loan interest of " + interest + " added to Loan Account.");
    }

    @Override
    public void display()
    {
        super.display();
        System.out.println("Loan Interest  : " + loanInterestRate + "%");
        System.out.println();
    }
}


// Transaction Class

class Transaction
{
    int txnId;
    String type;
    double amount;

    public Transaction(int txnId, String type, double amount)
    {
        this.txnId = txnId;
        this.type = type;
        this.amount = amount;
    }

    public void display()
    {
        System.out.println("Transaction ID : " + txnId);
        System.out.println("Type           : " + type);
        System.out.println("Amount         : " + amount);
        System.out.println();
    }
}


// Main Class 

public class Bank
{
    
    class BankBranch
    {
        int branchId;
        String branchName;
        Account acc1;
        Account acc2;
        Account acc3;
        Transaction t1;
        Transaction t2;
        Transaction t3;

        public BankBranch(int branchId, String branchName)
        {
            this.branchId = branchId;
            this.branchName = branchName;
        }

        public void setAccounts(Account a1, Account a2, Account a3)
        {
            this.acc1 = a1;
            this.acc2 = a2;
            this.acc3 = a3;
        }

        public void setTransactions(Transaction t1, Transaction t2, Transaction t3)
        {
            this.t1 = t1;
            this.t2 = t2;
            this.t3 = t3;
        }

        public void displayBranchDetails()
        {
            System.out.println("\n---------- Branch Details -----------");
            System.out.println("Branch ID   : " + branchId);
            System.out.println("Branch Name : " + branchName);
            System.out.println("------------------------");
        }

        public void displayAllData()
        {
            displayBranchDetails();

            System.out.println("\n--- Account Details ---\n");
            acc1.display();
            acc2.display();
            acc3.display();

            System.out.println("\n--- Transaction Details ---\n");
            t1.display();
            t2.display();
            t3.display();

            System.out.println("\n End of Day Report ");
            acc1.calculateInterest();
            acc2.calculateInterest();
            acc3.calculateInterest();

            System.out.println("All End of Day calculations completed successfully!");
        }
    }

    
    // Main 
    
    public static void main(String[] args)
    {
        System.out.println("----------- Bank Management System -------------\n");

       
        Bank bank = new Bank();

        // Create Accounts inside Bank
        SavingsAccount sa = new SavingsAccount(101, "Bhavesh", 15000, 4);
        CurrentAccount ca = new CurrentAccount(102, "Punam", 5000, 10000);
        LoanAccount la = new LoanAccount(103, "Hansraj", 30000, 8);

        // Perform few transactions
        sa.deposit(2000);
        sa.calculateInterest();

        ca.withdraw(12000);
        ca.calculateInterest();

        la.calculateInterest();

        // Create Transactions
        Transaction t1 = new Transaction(1, "Deposit", 2000);
        Transaction t2 = new Transaction(2, "Withdraw", 1500);
        Transaction t3 = new Transaction(3, "Loan Payment", 5000);

        
        BankBranch branch = bank.new BankBranch(201, "Pune Main Branch");

        branch.setAccounts(sa, ca, la);
        branch.setTransactions(t1, t2, t3);

       
        branch.displayAllData();

        System.out.println("\n---------- End of Program -------------");
    } 
}
