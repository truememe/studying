import React from "react";

class TodoItem extends React.Component {
    render() {
        return (
            <li>
                <input 
                    type="checkbox" 
                    checked={this.props.todo.completed} 
                    onChange={() => this.props.handleChangeProps(this.props.todo.id)}                       
                    />
                <button 
                    onClick={()=> this.props.handleDeleteTodo(this.props.todo.id)}>
                        Delete
                </button>
                {this.props.todo.title}
            </li>
        )
    }
}

// function TodoItem(props) {
//     return (
        
//     )
// }

export default TodoItem;