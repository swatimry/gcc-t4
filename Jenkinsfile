pipeline {
    agent any
    stages {
        stage('Clone Repository') {
            steps {
                git branch: 'main', url: 'https://github.com/swatimry/gcc-t4.git'
            }
        }
        stage('Build') {
            steps {
                bat 'g++ -o hello main.cpp'  
            }
        }
        stage('Run') {
            steps {
                bat '.\\hello' 
            }
        }
    }
}
