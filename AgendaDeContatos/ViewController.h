//
//  ViewController.h
//  AgendaDeContatos
//
//  Created by Pedro dos Santos Neto on 16/07/21.
//

#import <UIKit/UIKit.h>
#import "ContatoDao.h"

@protocol ViewControllerDelegate <NSObject>

-(void) contatoAdicionado: (Contato *)contato;
-(void) contatoAtualizado: (Contato *)contato;

@end

@interface ViewController : UIViewController

@property IBOutlet UITextField *nome;
@property IBOutlet UITextField *telefone;
@property IBOutlet UITextField *endereco;
@property IBOutlet UITextField *site;
@property IBOutlet UITextField *email;

@property ContatoDao *dao;
@property Contato *contato;

@property id<ViewControllerDelegate> delegate;

@end

