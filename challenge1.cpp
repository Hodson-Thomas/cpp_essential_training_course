//
// Created by thoma on 12/02/2025.
//

#include <format>
#include <iostream>
#include <ostream>

struct CatalogCard {
    const char * title {};
    const char * author {};
    const char * publisher {};
    const char * subject {};
    const unsigned int isbn {};
    const unsigned int world_cat {};
    double dewey_decimal {};
    const unsigned short int year_published {};
    const unsigned short int year_acquired {};
    unsigned short int quantity_in_stock {};
};

void display_catalog_card(CatalogCard * card) {
    std::cout << "CARD:\n";
    std::cout << std::format("  Title            : {}\n", card->title);
    std::cout << std::format("  Author           : {}\n", card->author);
    std::cout << std::format("  Publisher        : {}\n", card->publisher);
    std::cout << std::format("  Subject          : {}\n", card->subject);
    std::cout << std::format("  ISBN             : {}\n", card->isbn);
    std::cout << std::format("  WorldCat         : {}\n", card->world_cat);
    std::cout << std::format("  Dewey decimal    : {}\n", card->dewey_decimal);
    std::cout << std::format("  Published (Year) : {}\n", card->year_published);
    std::cout << std::format("  Acquired (Year)  : {}\n", card->year_acquired);
    std::cout << std::format("  Stock            : {}\n", card->quantity_in_stock);
}

// int main() {
//     CatalogCard card {
//         "Foo",
//         "Bar",
//         "Buzz",
//         "Feez",
//         123456789,
//         987654321,
//         123.654789,
//         1999,
//         2000,
//         2
//     };
//     display_catalog_card(&card);
//     return 0;
// }
