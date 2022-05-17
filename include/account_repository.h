#pragma once

#include <unordered_map>
#include "account.h"

namespace hayohtee
{
    static std::unordered_map<std::string, Account> accountsMap;

    void read_data(const std::string &file_name,
                   std::unordered_map<std::string, Account> &accountMap);

    Account get_account(const std::unordered_map<std::string, Account> &accounts_data,
                        const std::string &account_number);

    bool delete_account(std::unordered_map<std::string, Account> &accounts_data,
                        const std::string &account_number);

    void save_data(const std::string &file_name,
                   const std::unordered_map<std::string, Account> &accountMap);

    void update_account(std::unordered_map<std::string, Account> &accounts_data,
                        Account &account);
}