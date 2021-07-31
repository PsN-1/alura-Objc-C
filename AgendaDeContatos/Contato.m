//
//  Contato.m
//  AgendaDeContatos
//
//  Created by Pedro dos Santos Neto on 16/07/21.
//

#import "Contato.h"

@implementation Contato

NSString *nome;

//-(void) setNome:(NSString *)novoNome {
//    nome = novoNome;
//}
//
//-(NSString *)nome {
//    return nome;
//}

-(NSString *)description {
    NSString *dados = [NSString stringWithFormat:@"name: %@ Endereço: %@ E-mail: %@ Site: %@ Telefone: %@", self.nome, self.endereco, self.email, self.site, self.telefone];
    return dados;
}

@end

