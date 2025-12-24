#!/bin/bash
# Fetches only gl.xml, glx.xml, wgl.xml from OpenGL-Registry

set -e

REPO_URL="https://github.com/KhronosGroup/OpenGL-Registry.git"
TARGET_DIR="external/OpenGL-Registry"

if [ -f "$TARGET_DIR/xml/gl.xml" ]; then
    echo "Already exists: $TARGET_DIR/xml/gl.xml"
    echo "To update: cd $TARGET_DIR && git pull"
    exit 0
fi

mkdir -p "$TARGET_DIR"
cd "$TARGET_DIR"

git init
git remote add origin "$REPO_URL"
git config core.sparseCheckout true

cat >> .git/info/sparse-checkout << EOF
xml/gl.xml
xml/glx.xml
xml/wgl.xml
EOF

git pull --depth 1 origin main

echo "Done! Files:"
ls -lh xml/