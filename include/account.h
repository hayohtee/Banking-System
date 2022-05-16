#pragma once

#include <string>
#include <iostream>

namespace hayohtee
{
    class Account
    {
    public:
        Account();
        Account(const std::string &account_number, const std::string &first_name,
                const std::string &last_name, const std::string &pin_number, 
                const double &balance);

        const std::string get_full_name() const;
        const std::string &get_first_name() const;
        const std::string &get_last_name() const;
        const std::string &get_account_number() const;
        const std::string &get_pin_number() const;
        const double &get_balance() const;

        void set_account_number(const std::string &account_number);
        void set_first_name(const std::string &first_name);
        void set_last_name(const std::string &last_name);
        void set_pin_number(const std::string &pin_number);
        void set_balance(const double &balance);

        friend std::ostream &operator<<(std::ostream &outs, const Account &account);
        friend std::istream &operator>>(std::istream &ins, Account &account);
    
    private:
        std::string account_number{};
        std::string first_name{};
        std::string last_name{};
        std::string pin_number{};
        double balance;
    }
}