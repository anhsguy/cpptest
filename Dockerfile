# Use an official Ubuntu runtime as a parent image
FROM ubuntu:latest

# Set the working directory in the container
WORKDIR /usr/src/app

# Install necessary dependencies, including clang++
RUN apt-get update && \
    apt-get install -y g++ make clang

# Copy the Makefile and source code to the container
COPY Makefile .
COPY main.cpp .

# Build the C++ application
RUN make

# Specify the command to run on container start
CMD ["./main"]
