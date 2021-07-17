//
//  AppDelegate.h
//  AgendaDeContatos
//
//  Created by Pedro dos Santos Neto on 16/07/21.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

