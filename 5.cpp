void insere(const T& elemento, const int posicao){
    Celula<T>* aux1 = NULL
    Celula<T>* aux2 = this->inicio;
    int i = 0;
    while( (aux2 != NULL) && (posicao != i) )  
        {
        aux1 = aux2;
        aux2 = aux2->prox;
        i++;
        }
    if(aux1 == NULL && aux2 == NULL) //lista vazia
    { 
        if(indice == 0) 
            {
            Celula<T>* c = new Celula<T>(elemento);
            c->prox = NULL;
            this->inicio = c;
            this->fim = c;
            } 
        else  
        cout << "Elemento nao inserido!" << endl;
    } 
    
    else if(aux1 == NULL) //indice 0
        { //indice 0
        Celula<T>* c = new Celula<T>(elemento);
        c->prox = NULL;
        this->inicio = c;
        } 
    else if(aux2 == NULL) 
        cout << "Elemento nao inserido!" << endl;
        
    else 
        {
        Celula<T>* c = new Celula<T>(elemento);
        aux1->prox = c;
        c->prox = aux2;
        }
                                                }
