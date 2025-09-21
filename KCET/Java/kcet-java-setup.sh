#!/bin/bash

# KCET-Java Setup Script
# Author: Mushtaq Ahmad
# Purpose: Clone, compile, and manage KCET-Java repository for academic use

REPO_URL="https://github.com/your-username/KCET-Java.git"
PROJECT_DIR="KCET-Java"
JAVA_DIR="$PROJECT_DIR/KCET/Java"

echo "📦 Cloning KCET-Java repository..."
git clone --recurse-submodules "$REPO_URL"

echo "📁 Navigating to Java source directory..."
cd "$JAVA_DIR" || { echo "❌ Java directory not found."; exit 1; }

echo "🧪 Compiling all Java files..."
find . -name "*.java" -exec javac {} \;

echo "✅ Compilation complete."

# Optional cleanup
read -p "🧹 Do you want to remove all .class files? (y/n): " CLEAN
if [[ "$CLEAN" == "y" ]]; then
    find . -name "*.class" -type f -delete
    echo "🗑️ .class files removed."
else
    echo "📂 .class files retained for testing."
fi

echo "🎓 KCET-Java setup complete."