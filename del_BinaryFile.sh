#!/bin/zsh

for f in *; do
  [ -f "$f" ] || continue
  if file -b "$f" | grep -q '^ELF'; then
    rm -v -- "$f"
  fi
done
