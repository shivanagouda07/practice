pipeline {
    agent any
        stages {
            stage("parellel stages") {
                parallel {
                  stage('Test stage') {
                    steps {
                        sh '''
                            python3 even.py
                                echo "Test the stage"
                                '''
            }
        }

                    stage("Test1 stage running parellel") {
                        steps {
                            sh ' echo Running stage 2'
                        }
                    }

                    
    }



                
}
        }
}

