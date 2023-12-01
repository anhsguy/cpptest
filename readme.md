run main.cpp (using Makefile to compile) steps:
1. PC local: git clone https://github.com/anhsguy/cpptest.git
2. cd cpptest
3. docker build -t cpptest_image .
4. docker run cpptest_image

View detail on container or PC terminal:
Hello World!
2+3= 5
Type: Sedan
Color: Blue

Steps to push local to hub:

1. open hub.docker.com
2. create new repository:cpptest
3. right click Action >Push to Hub -  same as the prompt: docker push anhsguy792/cpptest:tagname