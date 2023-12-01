run main.cpp (using Makefile to compile) steps:
1. PC local: git clone https://github.com/anhsguy/cpptest.git
2. cd cpptest
3. docker build -t cpptest_image .
4. docker run cpptest_image        --1.1GB

View detail on container or PC terminal:
Hello World!
2+3= 5
Type: Sedan
Color: Blue

Steps to push local to hub:

1. PC local: docker images > cpptest_image   tag:latest
2. docker login > rename: docker tag cpptest_image anhsguy792/cpptest_image
3. To hub: docker push anhsguy792/cpptest_image:latest
4. run: docker run anhsguy792/cpptest_image

   remove any image: docker rmi cpptest_image     or  anhsguy792/cpptest_image
