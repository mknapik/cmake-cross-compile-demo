docker run --rm dockcross/browser-asmjs > dockcross-asmjs
chmod +x dockcross-asmjs

./dockcross-asmjs cmake -H. -Bbuild-asmjs
./dockcross-asmjs make -C build-asmjs/
