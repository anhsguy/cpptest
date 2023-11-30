PC local: git clone https://github.com/anhsguy/cpptest.git
cd cpptest
docker build -t cpptest_image .
docker run cpptest_image