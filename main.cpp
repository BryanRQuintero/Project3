//Project 3, Bryan Quintero & Hoang Le Duc
#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <chrono>
using namespace std;
using namespace std::chrono;
/**Using fstream to open the FNDDS Excel file, an array of vectors for the table, a queue and iostream to take in user
input and output, and chrono to time the sort algorithms.*/

class food
{
public:
    int id;
    string name;
    float protein, carb, sugar, fiber, fat, cholest, vitA, thiamin, ribo, niacin, vitB6, folate, choline, vitB12, vitC, vitD,
    vitE, vitK, calcium, phosph, mag, iron, zinc, copper, selen, pot, sodium;
    food(string a, string b, string c, string d, string e, string f, string g, string h, string i, string j, string k, string l,
         string m, string n, string o, string p, string q, string r, string s, string t, string u, string v, string w,
         string x, string y, string z, string aa, string ab, string ac) : id(stoi(a)), name(b), protein(stof(c)), carb(stof(d)),
         sugar(stof(e)), fiber(stof(f)), fat(stof(g)), cholest(stof(h)), vitA(stof(i)), thiamin(stof(j)),
         ribo(stof(k)), niacin(stof(l)), vitB6(stof(m)), folate(stof(n)), choline(stof(o)), vitB12(stof(p)),
         vitC(stof(q)), vitD(stof(r)), vitE(stof(s)), vitK(stof(t)), calcium(stof(u)), phosph(stof(v)),
         mag(stof(w)), iron(stof(x)), zinc(stof(y)), copper(stof(z)), selen(stof(aa)), pot(stof(ab)), sodium(stof(ac)){}
};
/**The food class will contain the id, name, and 27 nutrients comparable to the FDA's recommended daily average, as well
as the constructor.*/

food* add(string full)
{
    string id = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    string name = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    full = full.substr(full.find_first_of(',') + 1);
    full = full.substr(full.find_first_of(',') + 1);
    full = full.substr(full.find_first_of(',') + 1);
    string protein = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    string carb = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    string sugar = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    string fiber = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    string fat = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    full = full.substr(full.find_first_of(',') + 1);
    full = full.substr(full.find_first_of(',') + 1);
    full = full.substr(full.find_first_of(',') + 1);
    string cholesterol = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    string retinol = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    string vitA = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    full = full.substr(full.find_first_of(',') + 1);
    full = full.substr(full.find_first_of(',') + 1);
    full = full.substr(full.find_first_of(',') + 1);
    full = full.substr(full.find_first_of(',') + 1);
    full = full.substr(full.find_first_of(',') + 1);
    string thiamin = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    string riboflavin = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    string niacin = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    string vitB6 = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    full = full.substr(full.find_first_of(',') + 1);
    full = full.substr(full.find_first_of(',') + 1);
    full = full.substr(full.find_first_of(',') + 1);
    string folate = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    string choline = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    string vitB12 = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    full = full.substr(full.find_first_of(',') + 1);
    string vitC = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    string vitD = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    string vitE = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    full = full.substr(full.find_first_of(',') + 1);
    string vitK = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    string calcium = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    string phosphorus = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    string mag = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    string iron = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    string zinc = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    string copper = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    string selen = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    string pot = full.substr(0, full.find_first_of(','));
    full = full.substr(full.find_first_of(',') + 1);
    string sodium = full.substr(0, full.find_first_of(','));
    return new food(id,name,protein,carb,sugar,fiber,fat,cholesterol,vitA,thiamin,riboflavin,niacin,vitB6,folate,choline,vitB12,
             vitC,vitD,vitE,vitK,calcium,phosphorus,mag,iron,zinc,copper,selen,pot,sodium);
}
/**The add function will go through every row in the Excel sheet and collect only the necessary data, add them to a new
food object and return it.*/

void merge(vector<pair<float,string>> &toMSort, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    pair<float,string> X[n1];
    pair<float,string> Y[n2];
    for(int i = 0; i < n1; i++)
    {
        X[i] = toMSort[left + i];
    }
    for(int j = 0; j < n2; j++)
    {
        Y[j] = toMSort[mid + 1 + j];
    }
    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2)
    {
        if (X[i].first <= Y[j].first)
        {
            toMSort[k] = X[i];
            i++;
        }
        else
        {
            toMSort[k] = Y[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        toMSort[k] = X[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        toMSort[k] = Y[j];
        j++;
        k++;
    }
}
//Modified from Merge code on page 90 of "6-sorting" PowerPoint on Canvas to support a vector of pairs.

void mergeSort(vector<pair<float, string>> &toMSort, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(toMSort, left, mid);
        mergeSort(toMSort, mid + 1, right);
        merge(toMSort, left, mid, right);
    }
}
//Modified from Merge Sort code on page 89 of "6-Sorting" PowerPoint on Canvas.

void insertionSort(vector<pair<float, string>> &toISort, int left, int right)
{
    for (int i = left + 1; i < right; i++)
    {
        pair<float, string> key = toISort[i];
        int j = i - 1;
        while (j > left && toISort[j].first > key.first)
        {
            toISort[j+1] = toISort[j];
            j--;
        }
        toISort[j+1] = key;
    }
}
//Modified from Insertion Sort code on page 38 of "6-Sorting" PowerPoint on Canvas.

void timSort(vector<pair<float,string>> &toTSort, int max)
{
    int run = 76;
    for (int i = 0; i < max; i+=run)
    {
        insertionSort(toTSort, i, min((i+run-1), max));
    }
    for (int size = run; size < max; size = 2 * size)
    {
        for (int left = 0; left < max; left += 2 * size)
        {
            int mid = left + size - 1;
            int right = min((left + 2 * size - 1), (max));
            if (mid < right)
            {
                merge(toTSort, left, mid, right);
            }
        }
    }
}
/**Idea gotten from Other Sorts slide on page 125 of "6-Sorting" PowerPoint on Canvas. What Tim Sort is and how it works
was obtained form GeeksforGeeks, and our version was modified from there. In essence, it is a merge sort that uses insertion
sort on the split sections (arbitrarily chosen at 76, that double in size) to sort them, before merge combines those sections, until the vector is
eventually sorted. Link: https://www.geeksforgeeks.org/timsort/*/

string parseNutrient(string toParse)
{
    toParse = toParse.substr(0, toParse.find_first_of(' '));
    return toParse;
}
//Function will just parse the user's input nutrient name.

string parseValue(string toParse)
{
    toParse = toParse.substr(toParse.find_first_of(' '));
    return toParse;
}
//Function will just parse the user's input nutrient value.

vector<pair<float, string>> cycle(vector<pair<float,string>> nutrientList, float limit, int option)
{
    vector<pair<float, string>> toReturn;
    int top = 5;
    if (option == 1)
    {
        for(int x = 0; x < top; x++)
        {
            if (nutrientList[x].first <= limit)
            {
                toReturn.push_back(nutrientList[x]);
            }
            else
            {
                top++;
            }
        }
    }
    else if (option == 2)
    {
        for(int x = 0; x < top; x++)
        {
            if (nutrientList[nutrientList.size() - 1 - x].first <= limit)
            {
                toReturn.push_back(nutrientList[nutrientList.size() - 1 - x]);
            }
            else
            {
                top++;
            }
        }
    }
    return toReturn;
}
/**The cycle function will cycle through the best foods to raise or lower a nutirent (depending on the option), and return
a vector containing the five most appropriate. If they need to lower it, it will recommend foods with very low values, and
if they need to raise it, it will recommend foods with values that are lower than the daily recommended value for the specfied
nutrient MINUS what the user already consumes.*/

int main()
{
    ifstream data;
    const float proteinAvg = 50, carbAvg = 275, sugarAvg = 50, fiberAvg = 28, fatAvg = 78, cholestAvg = 300, vitAAvg = 900, thiaminAvg = 1.2,
    riboAvg = 1.3, niacinAvg = 16, vitB6Avg = 1.7, folateAvg = 400, cholineAvg = 550, vitB12Avg = 2.4, vitCAvg = 90, vitDAvg = 20,
    vitEAvg = 15, vitKAvg = 120, calciumAvg = 1300, phosphAvg = 1250, magAvg = 420, ironAvg = 18, zincAvg = 11, copperAvg = 0.9,
    selenAvg = 55, potAvg = 4700, sodiumAvg = 2300;
    vector<food*> all;
    data.open("FNDDS Formatted.txt");
    /**First in main, it will open up the delimited Excel file containing the nutrition values for various food and ingreidents
    as by the FNDDS, set up the daily averages as recommended by the FDA for the nutrients available, and create vector
    of food objects for temporary storage. There are 5624 different foods/ingredients, and 27 nutrients that can be compared
    to the recommended average, therefore taking in 151,848 data points.*/
    string fullRow;
    while (data.eof() == false)
    {
        getline(data, fullRow);
        all.push_back(add(fullRow));
    }
    vector<pair<float,string>> table [27];
    for (auto x : all)
    {
        table[0].push_back(make_pair(x->protein,x->name));
        table[1].push_back(make_pair(x->carb,x->name));
        table[2].push_back(make_pair(x->sugar,x->name));
        table[3].push_back(make_pair(x->fiber,x->name));
        table[4].push_back(make_pair(x->fat,x->name));
        table[5].push_back(make_pair(x->cholest,x->name));
        table[6].push_back(make_pair(x->vitA,x->name));
        table[7].push_back(make_pair(x->thiamin,x->name));
        table[8].push_back(make_pair(x->ribo,x->name));
        table[9].push_back(make_pair(x->niacin,x->name));
        table[10].push_back(make_pair(x->vitB6,x->name));
        table[11].push_back(make_pair(x->folate,x->name));
        table[12].push_back(make_pair(x->choline,x->name));
        table[13].push_back(make_pair(x->vitB12,x->name));
        table[14].push_back(make_pair(x->vitC,x->name));
        table[15].push_back(make_pair(x->vitD,x->name));
        table[16].push_back(make_pair(x->vitE,x->name));
        table[17].push_back(make_pair(x->vitK,x->name));
        table[18].push_back(make_pair(x->calcium,x->name));
        table[19].push_back(make_pair(x->phosph,x->name));
        table[20].push_back(make_pair(x->mag,x->name));
        table[21].push_back(make_pair(x->iron,x->name));
        table[22].push_back(make_pair(x->zinc,x->name));
        table[23].push_back(make_pair(x->copper,x->name));
        table[24].push_back(make_pair(x->selen,x->name));
        table[25].push_back(make_pair(x->pot,x->name));
        table[26].push_back(make_pair(x->sodium,x->name));
    }
    /**It will then go through every row in the file, and place it in the vector containing the food object. Then it will
    add every object to a table that contains every food/ingredient listed and only one specific nutrient per table row.*/
    cout << "Welcome to DietBHS, please input the number of nutrients you want to be recommended on:";
    int count = 0;
    cin >> count;
    string full;
    queue<string> fullList;
    cout << "Please input one of these nutrients (as written here) and the amount of that nutrient you consume on a daily basis with a space in between on every line. We will then recommend the best foods/ingredients to eat/use to reach the FDA's recommended daily intake:" << endl;
    cout << "Possible Nutrients: protein, carbs, sugar, fiber, fat, cholesterol, vitA, thiamin, riboflavin, niacin, vitB6, folate, choline, vitB12, vitC, vitD,vitE, vitK, calcium, phosphorus, magnesium, iron, zinc, copper, selenium, potassium, sodium" << endl;
    int counter = 0;
    while (counter <= count)
    {
        getline(cin, full);
        fullList.push(full);
        counter++;
    }
    fullList.pop();
    /**Then it will take in the amount of nutrients the user wants recommendations on, and for the input number, add the
    input nutrients in values to a queue for processing.*/
    while (fullList.empty() == false)
    {
        //The while loop will go through every user input until they have all been completed (with the queue being empty)
        int spaceCount = 0;
        for (int i = 0; i < fullList.front().size(); i++)
        {
            if (fullList.front()[i] == ' ')
            {
                spaceCount++;
            }
        }
        string nutrient = "";
        float value = -1;
        if (spaceCount == 1)
        {
            nutrient = parseNutrient(fullList.front());
            value = stof(parseValue(fullList.front()));
        }
        /**The nutrient string and value float are the user inputs after being seperated from the full input string if the
        user has formatted their input properly.*/
        if (nutrient == "protein")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[0], 0, table[0].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[0], table[0].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            /**For each nutrient, it will first sort the row of the table that contains that nutrient, first using Merge
            Sort, and the using Tim Sort. Both are timed and will be printed out later. The method of timing was obtained
            from GeeksforGeeks, Link: https://www.geeksforgeeks.org/measure-execution-time-function-cpp/*/
            vector<pair<float,string>> toPrint;
            if (value < proteinAvg)
            {
                toPrint = cycle(table[0], proteinAvg - value, 2);
                cout << "Recommendations to raise Protein (in grams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
                /**If the value is lower than the recommended average, then it will call cycle to return the highest values
                still under the average AND the value they of what they already consume on a daily basis, for the top 5
                to be printed out. The time it took for each sort is then printed at the end as well.*/
            }
            else if(value > proteinAvg)
            {
                toPrint = cycle(table[0], proteinAvg, 1);
                cout << "Recommendations to lower Protein (in grams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
                /**If the value is lower than the recommended average, then it will call cycle to return the lowest 5 values
                to be printed out. The time it took for each sort is then printed at the end as well.*/
            }
            else if (value == proteinAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Protein. Keep up the good work!" << endl;
            }
            /**If the input value is actually equal to the recommended average, it will congratulate them and move on.
            This code is the same for all the remaining 26 nutrients, the only difference being what row of th table to
            send to be sorted.*/
        }
        else if (nutrient == "carbs")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[1], 0, table[1].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[1], table[1].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < carbAvg)
            {
                toPrint = cycle(table[1], carbAvg - value, 2);
                cout << "Recommendations to raise Carbohydrates (in grams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > carbAvg)
            {
                toPrint = cycle(table[1], carbAvg, 1);
                cout << "Recommendations to lower Carbohydrates (in grams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == carbAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Carbohydrates. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "sugar")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[2], 0, table[2].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[2], table[2].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < sugarAvg)
            {
                toPrint = cycle(table[2], sugarAvg - value, 2);
                cout << "Recommendations to raise Sugar (in grams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > sugarAvg)
            {
                toPrint = cycle(table[2], sugarAvg, 1);
                cout << "Recommendations to lower Sugar (in grams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == sugarAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Sugar. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "fiber")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[3], 0, table[3].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[3], table[3].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < fiberAvg)
            {
                toPrint = cycle(table[3], fiberAvg - value, 2);
                cout << "Recommendations to raise Fiber (in grams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > fiberAvg)
            {
                toPrint = cycle(table[3], fiberAvg, 1);
                cout << "Recommendations to lower Fiber (in grams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == fiberAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Fiber. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "fat")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[4], 0, table[4].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[4], table[4].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < fatAvg)
            {
                toPrint = cycle(table[4], fatAvg - value, 2);
                cout << "Recommendations to raise Fat (in grams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > fatAvg)
            {
                toPrint = cycle(table[4], fatAvg, 1);
                cout << "Recommendations to lower Fat (in grams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == fatAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Fat. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "cholesterol")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[5], 0, table[5].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[5], table[5].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < cholestAvg)
            {
                toPrint = cycle(table[5], cholestAvg - value, 2);
                cout << "Recommendations to raise Cholesterol (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > cholestAvg)
            {
                toPrint = cycle(table[5], cholestAvg, 1);
                cout << "Recommendations to lower Cholesterol (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == cholestAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Cholesterol. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "vitA")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[6], 0, table[6].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[6], table[6].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < vitAAvg)
            {
                toPrint = cycle(table[6], vitAAvg - value, 2);
                cout << "Recommendations to raise Vitamin A (in RFA micrograms):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > vitAAvg)
            {
                toPrint = cycle(table[6], vitAAvg, 1);
                cout << "Recommendations to lower Vitamin A (in RFA micrograms):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == vitAAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Vitamin A. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "thiamin")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[7], 0, table[7].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[7], table[7].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < thiaminAvg)
            {
                toPrint = cycle(table[7], thiaminAvg - value, 2);
                cout << "Recommendations to raise Thiamin (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > thiaminAvg)
            {
                toPrint = cycle(table[7], thiaminAvg, 1);
                cout << "Recommendations to lower Thiamin (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == thiaminAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Thiamin. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "riboflavin")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[8], 0, table[8].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[8], table[8].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < riboAvg)
            {
                toPrint = cycle(table[8], riboAvg - value, 2);
                cout << "Recommendations to raise Riboflavin (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > riboAvg)
            {
                toPrint = cycle(table[8], riboAvg, 1);
                cout << "Recommendations to lower Riboflavin (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == riboAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Riboflavin. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "niacin")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[9], 0, table[9].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[9], table[9].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < niacinAvg)
            {
                toPrint = cycle(table[9], niacinAvg - value, 2);
                cout << "Recommendations to raise Niacin (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > niacinAvg)
            {
                toPrint = cycle(table[9], niacinAvg, 1);
                cout << "Recommendations to lower Niacin (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == niacinAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Niacin. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "vitB6")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[10], 0, table[10].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[10], table[10].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < vitB6Avg)
            {
                toPrint = cycle(table[10], vitB6Avg - value, 2);
                cout << "Recommendations to raise Vitamin B6 (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > vitB6Avg)
            {
                toPrint = cycle(table[10], vitB6Avg, 1);
                cout << "Recommendations to lower Vitamin B6 (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == vitB6Avg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Vitamin B6. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "folate")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[11], 0, table[11].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[11], table[11].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < folateAvg)
            {
                toPrint = cycle(table[11], folateAvg - value, 2);
                cout << "Recommendations to raise Folate (in micrograms):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > folateAvg)
            {
                toPrint = cycle(table[11], folateAvg, 1);
                cout << "Recommendations to lower Folate (in micrograms):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == folateAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Folate. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "choline")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[12], 0, table[12].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[12], table[12].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < cholineAvg)
            {
                toPrint = cycle(table[12], cholineAvg - value, 2);
                cout << "Recommendations to raise Choline (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > cholineAvg)
            {
                toPrint = cycle(table[12], cholineAvg, 1);
                cout << "Recommendations to lower Choline (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == cholineAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Choline. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "vitB12")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[13], 0, table[13].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[13], table[13].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < vitB12Avg)
            {
                toPrint = cycle(table[13], vitB12Avg - value, 2);
                cout << "Recommendations to raise Vitamin B12 (in micrograms):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > vitB12Avg)
            {
                toPrint = cycle(table[13], vitB12Avg, 1);
                cout << "Recommendations to lower Vitamin B12 (in micrograms):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == vitB12Avg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Vitamin B12. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "vitC")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[14], 0, table[14].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[14], table[14].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < vitCAvg)
            {
                toPrint = cycle(table[14], vitCAvg - value, 2);
                cout << "Recommendations to raise Vitamin C (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > vitCAvg)
            {
                toPrint = cycle(table[14], vitCAvg, 1);
                cout << "Recommendations to lower Vitamin C (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == vitCAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Vitamin C. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "vitD")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[15], 0, table[15].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[15], table[15].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < vitDAvg)
            {
                toPrint = cycle(table[15], vitDAvg - value, 2);
                cout << "Recommendations to raise Vitamin D (in micrograms):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > vitDAvg)
            {
                toPrint = cycle(table[15], vitDAvg, 1);
                cout << "Recommendations to lower Vitamin D (in micrograms):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == vitDAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Vitamin D. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "vitE")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[16], 0, table[16].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[16], table[16].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < vitEAvg)
            {
                toPrint = cycle(table[16], vitEAvg - value, 2);
                cout << "Recommendations to raise Vitamin E (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > vitEAvg)
            {
                toPrint = cycle(table[16], vitEAvg, 1);
                cout << "Recommendations to lower Vitamin E (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == vitEAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Vitamin E. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "vitK")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[17], 0, table[17].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[17], table[17].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < vitKAvg)
            {
                toPrint = cycle(table[17], vitKAvg - value, 2);
                cout << "Recommendations to raise Vitamin K (in micrograms):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > vitKAvg)
            {
                toPrint = cycle(table[17], vitKAvg, 1);
                cout << "Recommendations to lower Vitamin K (in micrograms):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == vitKAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Vitamin K. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "calcium")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[18], 0, table[18].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[18], table[18].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < calciumAvg)
            {
                toPrint = cycle(table[18], calciumAvg - value, 2);
                cout << "Recommendations to raise Calcium (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > calciumAvg)
            {
                toPrint = cycle(table[18], calciumAvg, 1);
                cout << "Recommendations to lower Calcium (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == calciumAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Calcium. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "phosphorus")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[19], 0, table[19].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[19], table[19].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < phosphAvg)
            {
                toPrint = cycle(table[19], phosphAvg - value, 2);
                cout << "Recommendations to raise Phosphorus (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > phosphAvg)
            {
                toPrint = cycle(table[19], phosphAvg, 1);
                cout << "Recommendations to lower Phosphorus (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == phosphAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Phosphorus. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "magnesium")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[20], 0, table[20].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[20], table[20].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < magAvg)
            {
                toPrint = cycle(table[20], magAvg - value, 2);
                cout << "Recommendations to raise Magnesium (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > magAvg)
            {
                toPrint = cycle(table[20], magAvg, 1);
                cout << "Recommendations to lower Magnesium (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == magAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Magnesium. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "iron")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[21], 0, table[21].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[21], table[21].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < ironAvg)
            {
                toPrint = cycle(table[21], ironAvg - value, 2);
                cout << "Recommendations to raise Iron (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > ironAvg)
            {
                toPrint = cycle(table[21], ironAvg, 1);
                cout << "Recommendations to lower Iron (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == ironAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Iron. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "zinc")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[22], 0, table[22].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[22], table[22].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < zincAvg)
            {
                toPrint = cycle(table[22], zincAvg - value, 2);
                cout << "Recommendations to raise Zinc (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > zincAvg)
            {
                toPrint = cycle(table[22], zincAvg, 1);
                cout << "Recommendations to lower Zinc (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == zincAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Zinc. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "copper")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[23], 0, table[23].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[23], table[23].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < copperAvg)
            {
                toPrint = cycle(table[23], copperAvg - value, 2);
                cout << "Recommendations to raise Copper (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > copperAvg)
            {
                toPrint = cycle(table[23], copperAvg, 1);
                cout << "Recommendations to lower Copper (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == copperAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Copper. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "selenium")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[24], 0, table[24].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[24], table[24].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < selenAvg)
            {
                toPrint = cycle(table[24], selenAvg - value, 2);
                cout << "Recommendations to raise Selenium (in micrograms):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > selenAvg)
            {
                toPrint = cycle(table[24], selenAvg, 1);
                cout << "Recommendations to lower Selenium (in micrograms):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == selenAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Selenium. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "potassium")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[25], 0, table[25].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[25], table[25].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < potAvg)
            {
                toPrint = cycle(table[25], potAvg - value, 2);
                cout << "Recommendations to raise Potassium (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > potAvg)
            {
                toPrint = cycle(table[25], potAvg, 1);
                cout << "Recommendations to lower Potassium (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == potAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Potassium. Keep up the good work!" << endl;
            }
        }
        else if (nutrient == "sodium")
        {
            auto startM = high_resolution_clock::now();
            mergeSort(table[26], 0, table[26].size() - 1);
            auto endM = high_resolution_clock::now();
            auto durationM = duration_cast<milliseconds>(endM - startM);
            auto startT = high_resolution_clock::now();
            timSort(table[26], table[26].size() - 1);
            auto endT = high_resolution_clock::now();
            auto durationT = duration_cast<milliseconds>(endT - startT);
            vector<pair<float,string>> toPrint;
            if (value < sodiumAvg)
            {
                toPrint = cycle(table[26], sodiumAvg - value, 2);
                cout << "Recommendations to raise Sodium (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if(value > sodiumAvg)
            {
                toPrint = cycle(table[26], sodiumAvg, 1);
                cout << "Recommendations to lower Sodium (in milligrams):" << endl;
                for(int a = 0; a < toPrint.size(); a++)
                {
                    cout << toPrint[a].second << ": " << toPrint[a].first << endl;
                }
                cout << "Time taken to sort results using Merge Sort (in milliseconds) " << durationM.count() << endl;
                cout << "Time taken to sort results using Tim Sort (in milliseconds) " << durationT.count() << endl;
            }
            else if (value == sodiumAvg)
            {
                cout << "Your daily consumption actually meets the recommended daily average for Sodium. Keep up the good work!" << endl;
            }
        }
        else
        {
            cout << "Error, please try again later." << endl;
        }
        // If the user's input is formatted incorrectly, it will print the error message and move on.
        fullList.pop();
        //The queue will then pop the front and move on.
    }
    return 0;
}
