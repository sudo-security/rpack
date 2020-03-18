#!/bin/bash

echo -n "C Library Dosyasi : " ;read dosya
echo -n "Aranacak Sting : " ;read strr
strings -a -t x $dosya | grep strr
