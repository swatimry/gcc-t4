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
                bat 'make'  // Use `sh 'make'` for Linux
            }
        }
        stage('Clean') {
            steps {
                bat 'make clean'  // Use `sh 'make clean'` for Linux
            }
        }
    }
}
