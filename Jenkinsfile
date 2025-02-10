pipeline {
    agent any
    stages {
        stage('Clone Repository') {
            steps {
                git 'https://github.com/swatimry/gcc-t4.git'
            }
        }
        stage('Build') {
            steps {
                sh 'make'
            }
        }
        stage('Clean') {
            steps {
                sh 'make clean'
            }
        }
    }
}
