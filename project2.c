#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TOTAL_QUESTIONS 100
#define EXAM_QUESTIONS 20

/* ================= QUESTION STRUCTURE ================= */

struct Question
{
    char question[250];
    char optionA[100];
    char optionB[100];
    char optionC[100];
    char optionD[100];
    char answer;
    char category[30];
};

/* ================= 100 QUESTION BANK ================= */

struct Question questionBank[TOTAL_QUESTIONS] =
{
    /* ---------- APTITUDE : 1-25 ---------- */

    {"What is 25 + 35?", "A. 50", "B. 60", "C. 70", "D. 80", 'B', "Aptitude"},

    {"What is 15% of 200?", "A. 20", "B. 25", "C. 30", "D. 35", 'C', "Aptitude"},

    {"What is 12 x 8?", "A. 86", "B. 96", "C. 106", "D. 116", 'B', "Aptitude"},

    {"What is the average of 10, 20 and 30?",
     "A. 15", "B. 20", "C. 25", "D. 30", 'B', "Aptitude"},

    {"If a = 10 and b = 20, what is a + b?",
     "A. 20", "B. 25", "C. 30", "D. 40", 'C', "Aptitude"},

    {"What is 20% of 500?",
     "A. 50", "B. 75", "C. 100", "D. 125", 'C', "Aptitude"},

    {"What is 144 divided by 12?",
     "A. 10", "B. 11", "C. 12", "D. 14", 'C', "Aptitude"},

    {"A pen costs Rs. 10. What is the cost of 5 pens?",
     "A. Rs. 40", "B. Rs. 50", "C. Rs. 60", "D. Rs. 70", 'B', "Aptitude"},

    {"What is 7 squared?",
     "A. 14", "B. 21", "C. 49", "D. 56", 'C', "Aptitude"},

    {"What is 1000 - 375?",
     "A. 525", "B. 625", "C. 675", "D. 725", 'B', "Aptitude"},

    {"What is 18 + 27?",
     "A. 35", "B. 40", "C. 45", "D. 50", 'C', "Aptitude"},

    {"What is 9 x 9?",
     "A. 72", "B. 81", "C. 90", "D. 99", 'B', "Aptitude"},

    {"What is 50% of 80?",
     "A. 20", "B. 30", "C. 40", "D. 50", 'C', "Aptitude"},

    {"What is 3/4 of 100?",
     "A. 50", "B. 60", "C. 75", "D. 80", 'C', "Aptitude"},

    {"If 5 books cost Rs. 250, what is the cost of one book?",
     "A. Rs. 40", "B. Rs. 50", "C. Rs. 60", "D. Rs. 70", 'B', "Aptitude"},

    {"What is 25 squared?",
     "A. 525", "B. 625", "C. 725", "D. 825", 'B', "Aptitude"},

    {"What is the simple interest on Rs. 1000 at 10% for 1 year?",
     "A. Rs. 50", "B. Rs. 100", "C. Rs. 150", "D. Rs. 200", 'B', "Aptitude"},

    {"A number increased from 100 to 120. What is the percentage increase?",
     "A. 10%", "B. 15%", "C. 20%", "D. 25%", 'C', "Aptitude"},

    {"What is the HCF of 12 and 18?",
     "A. 3", "B. 6", "C. 9", "D. 12", 'B', "Aptitude"},

    {"What is the LCM of 4 and 6?",
     "A. 8", "B. 10", "C. 12", "D. 24", 'C', "Aptitude"},

    {"If 2x = 20, what is x?",
     "A. 5", "B. 10", "C. 15", "D. 20", 'B', "Aptitude"},

    {"What is 30% of 300?",
     "A. 60", "B. 90", "C. 120", "D. 150", 'B', "Aptitude"},

    {"A car travels 60 km in 2 hours. What is its speed?",
     "A. 20 km/h", "B. 30 km/h", "C. 40 km/h", "D. 60 km/h", 'B', "Aptitude"},

    {"What is the square root of 81?",
     "A. 7", "B. 8", "C. 9", "D. 10", 'C', "Aptitude"},

    {"What is 2^5?",
     "A. 16", "B. 24", "C. 32", "D. 64", 'C', "Aptitude"},


    /* ---------- REASONING : 26-50 ---------- */

    {"What comes next: 2, 4, 6, 8, ?",
     "A. 9", "B. 10", "C. 11", "D. 12", 'B', "Reasoning"},

    {"What comes next: 5, 10, 15, 20, ?",
     "A. 22", "B. 23", "C. 25", "D. 30", 'C', "Reasoning"},

    {"What comes next: 3, 6, 12, 24, ?",
     "A. 36", "B. 42", "C. 48", "D. 50", 'C', "Reasoning"},

    {"If CAT is coded as DBU, DOG is coded as?",
     "A. EPH", "B. FPH", "C. EOG", "D. DPH", 'A', "Reasoning"},

    {"Which number is different?",
     "A. 2", "B. 4", "C. 6", "D. 9", 'D', "Reasoning"},

    {"If today is Monday, what day will it be after 3 days?",
     "A. Tuesday", "B. Wednesday", "C. Thursday", "D. Friday", 'C', "Reasoning"},

    {"Find the odd one: Apple, Mango, Carrot, Banana",
     "A. Apple", "B. Mango", "C. Carrot", "D. Banana", 'C', "Reasoning"},

    {"Which comes next: A, C, E, G, ?",
     "A. H", "B. I", "C. J", "D. K", 'B', "Reasoning"},

    {"Which number comes next: 1, 4, 9, 16, ?",
     "A. 20", "B. 24", "C. 25", "D. 30", 'C', "Reasoning"},

    {"Which word does not belong?",
     "A. Dog", "B. Cat", "C. Cow", "D. Rose", 'D', "Reasoning"},

    {"Find the missing number: 10, 20, 30, ?, 50",
     "A. 35", "B. 40", "C. 45", "D. 60", 'B', "Reasoning"},

    {"If BOOK is coded as CPP, then PEN is coded as?",
     "A. QFO", "B. QEN", "C. PFO", "D. RFO", 'A', "Reasoning"},

    {"Which number is odd one out?",
     "A. 11", "B. 13", "C. 17", "D. 21", 'D', "Reasoning"},

    {"Complete the series: 100, 90, 80, 70, ?",
     "A. 50", "B. 55", "C. 60", "D. 65", 'C', "Reasoning"},

    {"If EAST is opposite to WEST, then NORTH is opposite to?",
     "A. EAST", "B. SOUTH", "C. WEST", "D. NORTH", 'B', "Reasoning"},

    {"Which shape has three sides?",
     "A. Square", "B. Circle", "C. Triangle", "D. Rectangle", 'C', "Reasoning"},

    {"Find the next letter: B, D, F, H, ?",
     "A. I", "B. J", "C. K", "D. L", 'B', "Reasoning"},

    {"If 1 = A, 2 = B, 3 = C, then 5 = ?",
     "A. D", "B. E", "C. F", "D. G", 'B', "Reasoning"},

    {"Which is the smallest number?",
     "A. 0.5", "B. 0.05", "C. 0.55", "D. 0.505", 'B', "Reasoning"},

    {"Find the odd one: January, March, May, Sunday",
     "A. January", "B. March", "C. May", "D. Sunday", 'D', "Reasoning"},

    {"What comes next: 1, 2, 4, 8, ?",
     "A. 10", "B. 12", "C. 16", "D. 18", 'C', "Reasoning"},

    {"If all roses are flowers, then a rose is a?",
     "A. Tree", "B. Flower", "C. Fruit", "D. Leaf", 'B', "Reasoning"},

    {"Which number completes: 7, 14, 21, 28, ?",
     "A. 30", "B. 32", "C. 35", "D. 40", 'C', "Reasoning"},

    {"Find the odd one: 2, 3, 5, 9",
     "A. 2", "B. 3", "C. 5", "D. 9", 'D', "Reasoning"},

    {"What comes next: 50, 45, 40, 35, ?",
     "A. 25", "B. 30", "C. 32", "D. 33", 'B', "Reasoning"},


    /* ---------- COMPUTING : 51-75 ---------- */

    {"Which language is mainly used for system programming?",
     "A. HTML", "B. CSS", "C. C", "D. SQL", 'C', "Computing"},

    {"Which data structure follows LIFO?",
     "A. Queue", "B. Stack", "C. Tree", "D. Graph", 'B', "Computing"},

    {"Which data structure follows FIFO?",
     "A. Stack", "B. Queue", "C. Tree", "D. Array", 'B', "Computing"},

    {"Which symbol is used for AND operator in C?",
     "A. ||", "B. &&", "C. !", "D. &", 'B', "Computing"},

    {"Which function takes input in C?",
     "A. printf()", "B. scanf()", "C. input()", "D. get()", 'B', "Computing"},

    {"Which function displays output in C?",
     "A. scanf()", "B. input()", "C. printf()", "D. display()", 'C', "Computing"},

    {"Which keyword returns a value from a function?",
     "A. break", "B. continue", "C. return", "D. exit", 'C', "Computing"},

    {"Which symbol terminates a C statement?",
     "A. :", "B. .", "C. ;", "D. ,", 'C', "Computing"},

    {"Which is a loop in C?",
     "A. for", "B. repeat", "C. iterate", "D. loop", 'A', "Computing"},

    {"Which data type stores a single character?",
     "A. int", "B. float", "C. char", "D. double", 'C', "Computing"},

    {"Which data type stores whole numbers?",
     "A. int", "B. char", "C. float", "D. string", 'A', "Computing"},

    {"Which operator is used for assignment in C?",
     "A. ==", "B. =", "C. !=", "D. >=", 'B', "Computing"},

    {"Which operator checks equality?",
     "A. =", "B. ==", "C. !", "D. ++", 'B', "Computing"},

    {"Which header file is required for printf()?",
     "A. math.h", "B. stdio.h", "C. string.h", "D. stdlib.h", 'B', "Computing"},

    {"Which function is used to find string length?",
     "A. strlen()", "B. length()", "C. strlength()", "D. size()", 'A', "Computing"},

    {"Which header file contains strlen()?",
     "A. stdio.h", "B. math.h", "C. string.h", "D. time.h", 'C', "Computing"},

    {"Which symbol is used for single-line comments in C?",
     "A. //", "B. ##", "C. **", "D. <!--", 'A', "Computing"},

    {"Which keyword is used to define a constant?",
     "A. constant", "B. const", "C. fixed", "D. final", 'B', "Computing"},

    {"Which is NOT a valid C data type?",
     "A. int", "B. float", "C. char", "D. number", 'D', "Computing"},

    {"What is the index of the first element of an array?",
     "A. 0", "B. 1", "C. -1", "D. 2", 'A', "Computing"},

    {"Which statement is used for decision making?",
     "A. if", "B. print", "C. scan", "D. include", 'A', "Computing"},

    {"Which keyword stops a loop or switch?",
     "A. stop", "B. exit", "C. break", "D. end", 'C', "Computing"},

    {"Which keyword skips the current loop iteration?",
     "A. skip", "B. continue", "C. break", "D. pass", 'B', "Computing"},

    {"Which operator gives remainder?",
     "A. /", "B. *", "C. %", "D. //", 'C', "Computing"},

    {"Which function is the starting point of a C program?",
     "A. start()", "B. begin()", "C. main()", "D. run()", 'C', "Computing"},


    /* ---------- COMPUTER SCIENCE : 76-100 ---------- */

    {"What does CPU stand for?",
     "A. Central Processing Unit",
     "B. Computer Personal Unit",
     "C. Central Program Unit",
     "D. Control Processing Utility",
     'A', "Computer Science"},

    {"What does RAM stand for?",
     "A. Read Access Memory",
     "B. Random Access Memory",
     "C. Run Access Memory",
     "D. Random Application Memory",
     'B', "Computer Science"},

    {"Which memory is volatile?",
     "A. ROM", "B. Hard Disk", "C. RAM", "D. SSD",
     'C', "Computer Science"},

    {"Which device is used to enter text?",
     "A. Monitor", "B. Keyboard", "C. Speaker", "D. Printer",
     'B', "Computer Science"},

    {"Which device displays output?",
     "A. Keyboard", "B. Mouse", "C. Monitor", "D. Scanner",
     'C', "Computer Science"},

    {"What does URL stand for?",
     "A. Uniform Resource Locator",
     "B. Universal Resource Link",
     "C. Uniform Read Locator",
     "D. User Resource Location",
     'A', "Computer Science"},

    {"What does HTTP stand for?",
     "A. HyperText Transfer Protocol",
     "B. HighText Transfer Program",
     "C. Hyper Transfer Text Program",
     "D. High Transfer Protocol",
     'A', "Computer Science"},

    {"Which protocol is commonly used to send email?",
     "A. FTP", "B. SMTP", "C. HTTP", "D. DHCP",
     'B', "Computer Science"},

    {"Which protocol is used to automatically assign IP addresses?",
     "A. FTP", "B. SMTP", "C. DHCP", "D. HTTP",
     'C', "Computer Science"},

    {"Which layer of OSI model is responsible for routing?",
     "A. Physical", "B. Data Link", "C. Network", "D. Session",
     'C', "Computer Science"},

    {"How many layers are there in OSI model?",
     "A. 5", "B. 6", "C. 7", "D. 8",
     'C', "Computer Science"},

    {"Which protocol translates domain names into IP addresses?",
     "A. DNS", "B. FTP", "C. DHCP", "D. SMTP",
     'A', "Computer Science"},

    {"What does IP stand for?",
     "A. Internet Protocol",
     "B. Internal Program",
     "C. Internet Program",
     "D. Information Protocol",
     'A', "Computer Science"},

    {"Which is an example of an operating system?",
     "A. Linux", "B. HTML", "C. SQL", "D. HTTP",
     'A', "Computer Science"},

    {"Which one is an open-source operating system?",
     "A. Linux", "B. Windows", "C. MS Word", "D. Photoshop",
     'A', "Computer Science"},

    {"What is the full form of DBMS?",
     "A. Database Management System",
     "B. Data Backup Management System",
     "C. Database Machine System",
     "D. Data Management Software",
     'A', "Computer Science"},

    {"Which language is commonly used to query databases?",
     "A. SQL", "B. HTML", "C. CSS", "D. XML",
     'A', "Computer Science"},

    {"Which key uniquely identifies a record in a table?",
     "A. Foreign Key", "B. Primary Key", "C. Candidate Key", "D. Alternate Key",
     'B', "Computer Science"},

    {"Which command is used to retrieve data from a database?",
     "A. INSERT", "B. UPDATE", "C. SELECT", "D. DELETE",
     'C', "Computer Science"},

    {"Which command removes records from a table?",
     "A. DELETE", "B. SELECT", "C. INSERT", "D. CREATE",
     'A', "Computer Science"},

    {"Which algorithm is used to find an element in a sorted array efficiently?",
     "A. Linear Search", "B. Binary Search", "C. Bubble Sort", "D. Selection Sort",
     'B', "Computer Science"},

    {"Which sorting algorithm repeatedly swaps adjacent elements?",
     "A. Bubble Sort", "B. Binary Search", "C. Merge Sort", "D. Quick Search",
     'A', "Computer Science"},

    {"Which data structure is hierarchical?",
     "A. Stack", "B. Queue", "C. Tree", "D. Array",
     'C', "Computer Science"},

    {"Which data structure consists of nodes connected by edges?",
     "A. Array", "B. Graph", "C. Stack", "D. Queue",
     'B', "Computer Science"},

    {"What does HTML stand for?",
     "A. HyperText Markup Language",
     "B. HighText Machine Language",
     "C. Hyper Transfer Markup Language",
     "D. Home Tool Markup Language",
     'A', "Computer Science"}
};


/* ================= INSTRUCTIONS ================= */

void showInstructions()
{
    printf("\n");
    printf("====================================================\n");
    printf("                  EXAM INSTRUCTIONS\n");
    printf("====================================================\n");

    printf("1. Total questions available: 100\n");
    printf("2. Questions displayed in exam: 20\n");
    printf("3. Questions are selected randomly.\n");
    printf("4. Each question carries 1 mark.\n");
    printf("5. Total marks: 20\n");
    printf("6. There is no negative marking.\n");
    printf("7. Enter A, B, C or D.\n");
    printf("8. A question will not repeat in the same exam.\n");
    printf("9. Result is automatically calculated.\n");

    printf("====================================================\n");
}


/* ================= SAVE RESULT ================= */

void saveResult(char name[], int score, float percentage)
{
    FILE *file;

    file = fopen("result.txt", "a");

    if (file == NULL)
    {
        printf("\nUnable to save result.\n");
        return;
    }

    fprintf(file,
            "Student: %s | Score: %d/%d | Percentage: %.2f%%\n",
            name,
            score,
            EXAM_QUESTIONS,
            percentage);

    fclose(file);
}


/* ================= SHOW RESULT ================= */

void showResult(char name[], int score)
{
    float percentage;

    percentage =
        (score * 100.0) / EXAM_QUESTIONS;

    printf("\n\n");
    printf("====================================================\n");
    printf("                    FINAL RESULT\n");
    printf("====================================================\n");

    printf("Student Name : %s\n", name);
    printf("Total Marks  : %d\n", EXAM_QUESTIONS);
    printf("Correct      : %d\n", score);
    printf("Wrong        : %d\n",
           EXAM_QUESTIONS - score);

    printf("Percentage   : %.2f%%\n",
           percentage);

    if (percentage >= 80)
    {
        printf("Grade        : A\n");
        printf("Performance  : Excellent\n");
    }
    else if (percentage >= 60)
    {
        printf("Grade        : B\n");
        printf("Performance  : Very Good\n");
    }
    else if (percentage >= 40)
    {
        printf("Grade        : C\n");
        printf("Performance  : Good\n");
    }
    else
    {
        printf("Grade        : F\n");
        printf("Performance  : Need Improvement\n");
    }

    printf("====================================================\n");

    saveResult(name, score, percentage);

    printf("\nResult saved successfully in result.txt\n");
}


/* ================= START EXAM ================= */

void startExam()
{
    char name[50];
    char answer;

    int selected[EXAM_QUESTIONS];
    int used[TOTAL_QUESTIONS] = {0};

    int count = 0;
    int i;
    int randomNumber;
    int score = 0;

    printf("\n====================================================\n");
    printf("              STUDENT INFORMATION\n");
    printf("====================================================\n");

    printf("Enter Student Name: ");

    getchar();

    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';


    /*
       Select 20 unique random questions
       from the 100-question bank.
    */

    while (count < EXAM_QUESTIONS)
    {
        randomNumber =
            rand() % TOTAL_QUESTIONS;

        if (used[randomNumber] == 0)
        {
            used[randomNumber] = 1;

            selected[count] =
                randomNumber;

            count++;
        }
    }


    printf("\n====================================================\n");
    printf("              COMPUTING APTITUDE EXAM\n");
    printf("====================================================\n");

    printf("Student: %s\n", name);

    printf("Total Questions: %d\n",
           EXAM_QUESTIONS);

    printf("====================================================\n");


    /*
       Display only selected 20 questions.
    */

    for (i = 0; i < EXAM_QUESTIONS; i++)
    {
        int q = selected[i];

        printf("\n\n----------------------------------------------------\n");

        printf("Question %d of %d\n",
               i + 1,
               EXAM_QUESTIONS);

        printf("Category: %s\n",
               questionBank[q].category);

        printf("----------------------------------------------------\n");

        printf("%s\n",
               questionBank[q].question);

        printf("%s\n",
               questionBank[q].optionA);

        printf("%s\n",
               questionBank[q].optionB);

        printf("%s\n",
               questionBank[q].optionC);

        printf("%s\n",
               questionBank[q].optionD);

        printf("\nEnter your answer: ");

        scanf(" %c", &answer);


        /* Convert lowercase to uppercase */

        if (answer >= 'a' &&
            answer <= 'z')
        {
            answer =
                answer - 32;
        }


        /* Check answer */

        if (answer ==
            questionBank[q].answer)
        {
            printf("\nCorrect Answer! +1\n");

            score++;
        }
        else
        {
            printf("\nWrong Answer!\n");

            printf("Correct Answer: %c\n",
                   questionBank[q].answer);
        }
    }


    /* Display final result */

    showResult(name, score);
}


/* ================= MAIN FUNCTION ================= */

int main()
{
    int choice;

    /*
       Seed random number generator.
       This makes question selection
       different on different runs.
    */

    srand(
        (unsigned int)time(NULL)
    );


    while (1)
    {
        printf("\n\n");
        printf("====================================================\n");
        printf("       COMPUTING APTITUDE EXAMINATION SYSTEM\n");
        printf("====================================================\n");

        printf("1. Start Exam\n");
        printf("2. Instructions\n");
        printf("3. Exit\n");

        printf("====================================================\n");

        printf("Enter your choice: ");

        scanf("%d", &choice);


        switch (choice)
        {
            case 1:

                startExam();

                break;


            case 2:

                showInstructions();

                break;


            case 3:

                printf("\nThank you for using the system!\n");

                printf("Good Luck!\n");

                return 0;


            default:

                printf("\nInvalid choice!\n");

                printf("Please enter 1, 2 or 3.\n");
        }
    }

    return 0;
}