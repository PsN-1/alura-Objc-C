//
//  ContatoDao.h
//  AgendaDeContatos
//
//  Created by Pedro dos Santos Neto on 19/07/21.
//

#import <Foundation/Foundation.h>
#import "Contato.h"

NS_ASSUME_NONNULL_BEGIN

@interface ContatoDao : NSObject

@property NSMutableArray *contatos;

-(void) adicionaContato: (Contato *) contato;

-(NSInteger) total;
-(Contato *) contatoDoIndice: (NSInteger) indice;
-(NSInteger) indiceDoContato: (Contato *) contato;
+(ContatoDao *) contatoDaoInstance;
-(void) removeContato: (Contato *) contato;



@end

NS_ASSUME_NONNULL_END
