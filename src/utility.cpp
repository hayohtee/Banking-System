#include <iostream>
#include <chrono>
#include <thread>
#include "utility.h"

namespace hayohtee
{
    void clear_screen()
    {
        std::cout << "\x1B[2J\x1B[H";
    }

    void show_header()
    {
        clear_screen();

        std::cout << "\n ______________________________________________________\n";
        std::cout << "|                                                      |\n";
        std::cout << "|\t\tBANK MANAGEMENT SYSTEM                 |\n";
        std::cout << "|                                                      |\n";
        std::cout << "|\t\tBy Olamilekan Akintilebo               |\n";
        std::cout << "|                                                      |\n";
        std::cout << "|______________________________________________________|\n";

        sleep(1500);
    }

    void show_main_menu()
    {
        clear_screen();

        std::cout << "\nMAIN MENU\n\n";
        std::cout << "1. NEW ACCOUNT\n";
        std::cout << "2. DEPOSIT\n";
        std::cout << "3. WITHDRAW\n";
        std::cout << "4. BALANCE ENQUIRY\n";
        std::cout << "5. ALL ACCOUNT HOLDER LIST\n";
        std::cout << "6. CLOSE AN ACCOUNT\n";
        std::cout << "7. MODIFY AN ACCOUNT\n";
        std::cout << "8. EXIT\n";
    }

    void show_account_form()
    {
        clear_screen();

        std::cout << "\n===NEW ACCOUNT ENTRY FORM===\n\n";
    }
    
    void show_transaction_form()
    {
        clear_screen();

        std::cout << "\n===ACCOUNT TRANSACTION FORM===\n\n";
    }
    
    void show_balance_form()
    {
        clear_screen();

        std::cout << "\n===BALANCE DETAILS===\n\n";
    }
    
    void show_account_holder_form()
    {
        clear_screen();

        std::cout << "\n\t\tACCOUNT HOLDER LIST\n\n";
        
    }
    
    void show_account_delete_form()
    {
        
        clear_screen();

        std::cout << "\n===DELETE RECORD===\n\n";
    }
    
    void show_account_update_form()
    {
        
        clear_screen();

        std::cout << "\n===UPDATE RECORD===\n\n";
    }

    void sleep(int duration)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(duration));
    }

}