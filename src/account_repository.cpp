#include <fstream>
#include <stdexcept>
#include "account_repository.h"

namespace hayohtee
{
    void read_data(const std::string &file_name,
                   std::unordered_map<std::string, Account> &accountMap)
    {
        std::ifstream fin{file_name};

        if (!fin.is_open())
            throw std::runtime_error("Error connecting data file");

        Account account;
        while (fin >> account)
        {
            accountMap[account.get_account_number()] = std::move(account);
        }

        fin.close();
    }

    Account get_account(const std::unordered_map<std::string, Account> &accounts_data,
                        const std::string &account_number)
    {
        const auto iter = accounts_data.find(account_number);

        if (iter == accounts_data.end())
            throw std::runtime_error("Account not found");

        return (iter->second);
    }

    bool delete_account(std::unordered_map<std::string, Account> &accounts_data,
                        const std::string &account_number)
    {
        auto iter = accounts_data.find(account_number);

        if (iter == accounts_data.end())
            return false;

        accounts_data.erase(iter);
        return true;
    }
    
    void save_data(const std::string &file_name,
                    const std::unordered_map<std::string, Account> &accounts_data)
    {
        std::ofstream fout{file_name};

        for (auto account : accounts_data)
            fout << account.second;
        
        fout.close();
    }
    
    void update_account(std::unordered_map<std::string, Account> &accounts_data,
                            Account &account)
    {
        account.set_first_name("Yekini");
        accounts_data[account.get_account_number()] = account;
    }

}