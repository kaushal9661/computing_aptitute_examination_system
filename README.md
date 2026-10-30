# 🎓 Computing Aptitude Examination System

A robust, interactive examination system designed for testing students across **Aptitude, Reasoning, Computing, and Computer Science**. Available in both a **C Console Application** version and a modern **Web Frontend (HTML/CSS/JavaScript)** version.

---

## 🌟 Features

* **🧠 100-Question Question Bank**: Carefully curated questions spanning 4 distinct categories (25 questions each).
* **🎲 Randomized Exam Generation**: Automatically picks **20 unique random questions** per exam session so no two tests are identical.
* **📊 Automated Scoring & Grading**: Instantly calculates scores, percentages, and assigns letter grades (**A, B, C, F**) with performance feedback.
* **💾 Result Persistence**: 
  * *C Version*: Automatically appends student results to a local `result.txt` file.
  * *Web Version*: Generates and downloads a formatted `result.txt` report directly to your device.
* **💻 Dual Implementation**: Includes both the original command-line C source code and an interactive single-file web application.

---

## 📂 Project Structure

```text
📦 Computing-Aptitude-Examination-System

📚 Question CategoriesCategoryDescriptionQuestion RangeAptitudeMathematical problems, percentages, ratios, and basic arithmetic1 – 25ReasoningNumber series, coding-decoding, pattern matching, and logical puzzles26 – 50ComputingC programming language fundamentals, syntax, data structures, and algorithms51 – 75Computer ScienceCore CS concepts, networking protocols, operating systems, and DBMS76 – 100🚀 Getting StartedOption 1: Running the Web Frontend (index.html)Download or clone the repository.Open the index.html file in any modern web browser (Chrome, Firefox, Edge, Safari).Enter your name, read the instructions, and start the exam interactively!Option 2: Running the C Console Application (main.c)Ensure you have a C compiler installed (like gcc).Compile the source code using your terminal/command prompt:Bashgcc main.c -o exam_system
Run the executable:Bash# On Windows
./exam_system.exe

# On Linux/macOS
./exam_system
📈 Grading ScaleGrade A (≥ 80%): ExcellentGrade B (60% – 79%): Very GoodGrade C (40% – 59%): GoodGrade F (< 40%): Need Improvement🛡️ LicenseThis project is open-source and available under the MIT License. Feel free to use, modify, and improve it for educational or personal use!
├── 📄 main.c           # Original C Console Application
├── 📄 index.html       # Modern HTML/CSS/JS Web Frontend
└── 📄 README.md        # Project Documentation
