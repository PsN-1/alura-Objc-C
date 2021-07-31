//
//  ListaContatosViewController.h
//  AgendaDeContatos
//
//  Created by Pedro dos Santos Neto on 19/07/21.
//

#import <UIKit/UIKit.h>
#import "ContatoDao.h"
#import "ViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface ListaContatosViewController : UITableViewController<ViewControllerDelegate>

@property ContatoDao *dao;
@property Contato *contatoSelecionado;
@property NSInteger linhaSelecionada;


@end

NS_ASSUME_NONNULL_END
