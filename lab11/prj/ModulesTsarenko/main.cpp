#include <fstream>
#include <string>
#include <vector>

#include "ModulesTsarenko.h"


vector<EducationalInstitution> registry;

void loadRegistry(const string& filename) {
    ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        cerr << "Помилка під час відкриття файлу: " << filename << endl;
        return;
    }
    EducationalInstitution institution;
    while (inputFile >> institution.code) {
        getline(inputFile, institution.fullName);
        getline(inputFile, institution.shortName);
        getline(inputFile, institution.englishName);
        getline(inputFile, institution.ownershipForm);
        getline(inputFile, institution.managementBody);
        getline(inputFile, institution.directorPosition);
        getline(inputFile, institution.directorName);
        getline(inputFile, institution.address);
        getline(inputFile, institution.phone);
        getline(inputFile, institution.email);
        getline(inputFile, institution.website);
        inputFile >> institution.isCrimeaUkraine;
        inputFile >> institution.isDonbasUkraine;
        inputFile >> institution.hasMilitaryDepartment;
        inputFile >> institution.foundationYear;
        registry.push_back(institution);
    }
    inputFile.close();
}

void saveRegistry(const string& filename) {
    ofstream outputFile(filename);
    if (!outputFile.is_open()) {
        cerr << "Помилка під час відкриття файлу: " << filename << endl;
        return;
    }
    for (const auto& institution : registry) {
        outputFile << institution.code << endl;
        outputFile << institution.fullName << endl;
        outputFile << institution.shortName << endl;
        outputFile << institution.englishName << endl;
        outputFile << institution.ownershipForm << endl;
        outputFile << institution.managementBody << endl;
        outputFile << institution.directorPosition << endl;
        outputFile << institution.directorName << endl;
        outputFile << institution.address << endl;
        outputFile << institution.phone << endl;
        outputFile << institution.email << endl;
        outputFile << institution.website << endl;
        outputFile << (institution.isCrimeaUkraine ? "1" : "0") << endl;
        outputFile << (institution.isDonbasUkraine ? "1" : "0") << endl;
        outputFile << (institution.hasMilitaryDepartment ? "1" : "0") << endl;
        outputFile << institution.foundationYear << endl;
    }
    outputFile.close();
}
