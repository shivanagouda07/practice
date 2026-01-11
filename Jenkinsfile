pipeline {
    agent any
        environment {
            NAME = 'shivu'
        }
        stages {
            stage("parellel stages") {
                parallel {
                  stage('Test stage') {
                    steps {
                        echo $NAME
                        sh '''
                            python3 even.py
                                echo "Test the stage"
                                echo "$NAME"
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

