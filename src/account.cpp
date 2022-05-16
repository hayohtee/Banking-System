#include <iomanip>
#include "account.h"

namespace hayohtee
{
    Account::Account()
    {
    }
    
    Account::Account(const std::string &account_number, const std::string &first_name,
                    const std::string &last_name, const std::string &pin_number, 
                    const double &balance)
        : account_number(account_number), first_name(first_name),
          last_name(last_name), pin_number(pin_number), balance(balance)
    {
    }
    
    const std::string Account::get_full_name() const
    {
        return (first_name + " " + last_name);
    }
    
    const std::string& Account::get_first_name() const
    {
        return first_name;
    }
    
    const std::string& Account::get_last_name() const
    {
        return last_name;
    }
    
    const std::string& Account::get_account_number() const
    {
        return account_number;
    }
    
    const std::string& Account::get_pin_number() const
    {
        return pin_number;
    }
    
    const double& Account::get_balance() const
    {
        return balance;
    }
    
    void Account::set_account_number(const std::string &account_number)
    {
        if (!account_number.empty())
            this->account_number = account_number;
    }
    
    void Account::set_first_name(const std::string &first_name)
    {
        if (!first_name.empty())
            this->first_name = first_name;
    }
    
    void Account::set_last_name(const std::string &last_name)
    {
        if (!last_name.empty())
            this->last_name = last_name;
    }
    
    void Account::set_pin_number(const std::string &pin_number)
    {
        if (!pin_number.empty())
            this->pin_number = pin_number;
    }
    
    void Account::set_balance(const double &balance)
    {
        if (balance > 0)
            this->balance = balance;
    }
    
    bool Account::deposit(const double &amount)
    {
        if (amount > 0)
        {
            balance += amount;
            return true;
        }   

        return false;
    }
    
    bool Account::withdraw(const double &amount)
    {
        if (amount > balance)
            return false;
        
        balance -= amount;
        return true;
    }
    
    std::istream& operator>>(std::istream &ins, Account &account)
    {
        std::string value;

        ins >> value;
        account.set_account_number(std::move(value));

        ins >> value;
        account.set_first_name(std::move(value));

        ins >> value;
        account.set_last_name(std::move(value));
    
        ins >> value;
        account.set_pin_number(std::move(value));

        double balance;
        ins >> balance;
        account.set_balance(std::move(balance));

        return ins;
    }
    
    std::ostream& operator<<(std::ostream &outs, const Account &account)
    {
        outs.setf(std::ios_base::left);

        outs << std::setw(16) << account.account_number
             << std::setw(16) << account.first_name
             << std::setw(16) << account.last_name
             << std::setw(8) << account.pin_number
             << account.balance << std::endl;


        return outs;
    }


}