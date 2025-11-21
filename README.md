

# 📊 Apriori Algorithm — C++ Implementation with Qt GUI

This project provides a complete, fully functional implementation of the **Apriori Algorithm** using **C++** for the backend and **Qt** for the user interface.
The application reads a transaction dataset, generates **candidate itemsets**, discovers **frequent itemsets**, computes **Support**, **Confidence**, and **Lift**, and finally produces **strong association rules**.
A graphical dashboard visualizes the frequent itemsets using bar charts and displays all discovered rules in a readable format.

---

## 🚀 Features

### 🧠 Apriori Algorithm (C++ Backend)

* Generates *all candidate itemsets (C1, C2, C3…)*
* Performs pruning using Apriori property
* Counts item occurrences and calculates:

  * **Support**
  * **Confidence**
  * **Lift**
* Generates **strong rules** based on user-defined confidence threshold
* Determines **Positive / Negative / No correlation** using lift value

### 🖥️ Qt Graphical User Interface

* Clean and intuitive modern interface
* Load dataset file with file dialog
* Input fields for:

  * **Minimum Support (count)**
  * **Minimum Confidence (%)**
* Displays:

  * Frequent itemsets in table format
  * Support visualization using **bar chart**
  * Association rules with:

    * Lift
    * Confidence
    * Correlation
    * Strong rule identification
* Clear/Reset functionality
* Multi-threading compatible (non-blocking UI)

---

## 📂 Project Structure

```
Apriori-Qt/
│
├── src/
│   ├── main.cpp
│   ├── MainWindow.cpp/.h
│   ├── ui_mainwindow.ui
│   ├── apriori/
│   │   ├── Apriori.cpp
│   │   └── Apriori.h
│   ├── utils/
│       ├── FileReader.cpp/.h
│       └── Helpers.cpp/.h
│
├── data/
│   └── sample_transactions.txt
│
├── output/
│   ├── frequent_itemsets.txt
│   ├── rules_output.txt
│   └── chart_exports/
│
├── CMakeLists.txt
├── apriori.pro
└── README.md
```

---

## 📄 Input Data Format

Your transaction dataset should include **one transaction per line**.
Items may be separated by:

* spaces
* commas
* tabs

### Example:

```
M O K E
K Y
O E K
K E Y
O K E
```

---

## 📊 How the Apriori Algorithm Works

### 1️⃣ Generate Candidate Itemsets

Start from 1-itemsets and generate C1, then use joining to generate C2, C3…

### 2️⃣ Apply Apriori Pruning

Remove any candidate whose subsets are not frequent.

### 3️⃣ Count Support

Check how many transactions each candidate appears in.

### 4️⃣ Select Frequent Itemsets

Itemsets with `support >= minimum support` are considered frequent.

### 5️⃣ Generate Rules

From each frequent itemset **Lk**, generate rules of the form:

`X → Y`
where `X ∪ Y = Lk` and `X ∩ Y = ∅`.

### 6️⃣ Compute Metrics

* **Confidence:**
  [
  Conf(X \rightarrow Y) = \frac{Support(X \cup Y)}{Support(X)}
  ]

* **Lift:**
  [
  Lift = \frac{Confidence}{Support(Y)}
  ]

### 7️⃣ Identify Correlation

* `Lift > 1` → **Positive correlation**
* `Lift < 1` → **Negative correlation**
* `Lift = 1` → **No correlation**

---

## 📈 Example Output (from screenshot)

### Frequent Itemsets Table

```
LEVEL | ITEMSET | SUPPORT
--------------------------------
1     | {M}     | 3
1     | {O}     | 3
1     | {K}     | 5
1     | {E}     | 4
2     | {MK}    | 3
2     | {OK}    | 3
2     | {OE}    | 3
2     | {KE}    | 4
3     | {OKE}   | 3
```

### Strong Association Rules

```
K => M  | Lift: 1.2 | Positive Correlation | Confidence: 0.6 | Strong Rule 60%
M => K  | Lift: 1.2 | Positive Correlation | Confidence: 1.0 | Strong Rule 60%
E => O  | Lift: 1.5 | Positive Correlation | Confidence: 0.75 | Strong Rule 60%
Y => K  | Lift: 1.2 | Positive Correlation | Confidence: 0.8 | Strong Rule 60%
...
```

---

## 🖼 Frequent Itemsets Chart

The Qt Charts module displays itemset support as a **bar chart**, making it easy to visualize which items or combinations have the strongest presence.

---

## ⚙️ How to Build and Run

### ▶️ Using Qt Creator

1. Open `apriori.pro`
2. Configure your Qt version
3. Click **Build**
4. Run the application

---

### ▶️ Using CMake

```bash
mkdir build
cd build
cmake ..
cmake --build .
./AprioriApp
```

---

## 🛠 Technologies Used

* **C++17**
* **Qt 5 or Qt 6**
* **Qt Charts**
* STL Containers (vector, set, map)
* CMake / qmake build systems

---

## 🧪 Testing & Validation

* Verified on multiple datasets
* Tested with varying thresholds
* Supports small, medium, and moderately large datasets
* Validated accuracy of support, confidence, and lift calculations

---




* more formal
* more academic
* shorter
* or styled like a professional GitHub open-source project

Just tell me — I can generate it!
