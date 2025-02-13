//
// Created by thoma on 13/02/2025.
//

#include<iostream>
#include <string>
#include <fstream>



int main() {
    static const auto input_file_path { "D:/Github/Personal/cpp_essential_training_course/input.txt" };
    static const auto output_file_path { "D:/Github/Personal/cpp_essential_training_course/output.txt" };

    std::ifstream infile(input_file_path);
    std::ofstream outfile(output_file_path);

    static char buf[1028];
    while (infile.good()) {
        infile.getline(buf, sizeof(buf));
        std::cout << "read : " << buf << "\n";
        std::string text {buf};
        if (!text.contains('\t')) continue;
        size_t first_tab = text.find('\t');
        text.replace(first_tab, 1, ", name: ");
        if (!text.contains('\t')) continue;
        size_t second_tab = text.find('\t');
        text.replace(second_tab, 1, ", desc: ");
        outfile << "sku: " << text << '\n';
    }
    outfile.close();
    infile.close();
}